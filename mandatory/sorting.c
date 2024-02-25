/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:03:06 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/25 22:39:40 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_check_sorting(t_list **arg_ab)
{
	t_list	*current;

	current = *arg_ab;
	while (current->next)
	{
		if (current->content > current->next->content)
			return (1);
		current = current->next;
	}
	return (0);
}

void	sort_3(t_list **arg_a)
{
	while (ft_check_sorting(arg_a))
	{
		if ((*arg_a)->content > (*arg_a)->next->content)
			ft_swap(arg_a, 'a');
		if ((*arg_a)->next->content  > (*arg_a)->next->next->content)
			ft_reverse_rotate(arg_a, 'a');
	}
}

void	sort_5(t_list **arg_a, t_list **arg_b)
{
	while (ft_lstsize(*arg_a) > 3)
	{
		if ((*arg_a)->index == 0 || (*arg_a)->index == 1)
			ft_push_b(arg_a, arg_b);
		else
			ft_rotate(arg_a, 'a');
	}
	sort_3(arg_a);
	if (!ft_check_sorting(arg_b))
		ft_swap(arg_b, 'b');
	ft_push_a(arg_a, arg_b);
	ft_push_a(arg_a, arg_b);

}

void	ft_sorting(t_list **arg_a, t_list **arg_b)
{
	int	pivot1;
	int	pivot2;

	pivot2 = 0;
	while (ft_lstsize(*arg_a) > 3)
	{
		pivot1 = (ft_lstsize(*arg_a) / 6) + pivot2;
		pivot2 = pivot2 + (ft_lstsize(*arg_a) / 3);
		while (ft_lstsize(*arg_b) < pivot2)
		{
			if ((*arg_b) && (*arg_b)->index < pivot1 && (*arg_a)->index >= pivot2)
				rotate_ab(arg_a, arg_b);
			else if ((*arg_b) && (*arg_b)->index < pivot1)
				ft_rotate(arg_b, 'b');
			if ((*arg_a)->index < pivot2)
				ft_push_b(arg_a, arg_b);
			else if ((*arg_a)->index >= pivot2)
				ft_rotate(arg_a, 'a');
			// printf("size of a %d\n", ft_lstsize(*arg_a));
			// printf("size of b %d p2 %d\n", ft_lstsize(*arg_b), pivot2);
		}
	}
	sort_3(arg_a);
	ft_sorting2(arg_a, arg_b);
}

int	ft_max(t_list **arg_ab)
{
	t_list	*current;
	int		max;

	current = *arg_ab;
	max  = current->index;
	while (current)
	{
		if (max < current->index)
			max = current->index;
		current = current->next;
	}
	return (max);
}

int	ft_index_b(int index, t_list **arg_b)
{
	int	i;

	i = 0;
	while (*arg_b)
	{
		i++;
		if (index == (*arg_b)->index)
			return (i);
		(*arg_b) = (*arg_b)->next;
	}
	return (0);
}

void	ft_sorting2(t_list **arg_a, t_list **arg_b)
{
	int pos;

	while (ft_lstsize(*arg_b))
	{
		if ((*arg_a)->index - 1 == (*arg_b)->index)
			ft_push_a(arg_a, arg_b);
		else if ((*arg_a)->index - 1 == (ft_lstlast((*arg_b))->index))
		{
			ft_reverse_rotate(arg_b, 'b');
			ft_push_a(arg_a, arg_b);
		}
		else if (ft_max(arg_a) == (ft_lstlast((*arg_a))->index))
		{
			ft_push_a(arg_a, arg_b);
			ft_rotate(arg_a, 'a');
		}
		else if ((*arg_b)->index > (ft_lstlast((*arg_a))->index))
		{
			ft_push_a(arg_a, arg_b);
			ft_rotate(arg_a, 'a');
		}
		else if ((ft_lstlast((*arg_b))->index) > (ft_lstlast((*arg_a))->index))
		{
			ft_reverse_rotate(arg_b, 'b');
			ft_push_a(arg_a, arg_b);
			ft_rotate(arg_a, 'a');
		}
		else if ((ft_lstlast((*arg_a))->index) == (*arg_a)->index - 1)
			ft_reverse_rotate(arg_a, 'a');
		else
		{
			pos = ft_index_b((*arg_a)->index - 1, arg_b);
			if (pos <= ft_lstsize(*arg_b) / 2)
				ft_rotate(arg_b, 'b');
			else if (pos > ft_lstsize(*arg_b) / 2)
				ft_reverse_rotate(arg_b, 'b');
		}
		printf("=======A=======%d\n", ft_lstsize(*arg_a));
		ft_printf(*arg_a);
		printf("=======B=======%d\n", ft_lstsize(*arg_b));
		ft_printf(*arg_b);
	}
	// while (ft_lstlast(*arg_a)->index < (*arg_a)->index)
	// 	ft_reverse_rotate(arg_a, 'a');
}

