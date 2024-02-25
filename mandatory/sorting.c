/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:03:06 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/24 16:36:32 by ahomari          ###   ########.fr       */
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
		if ((*arg_a)->content  > (*arg_a)->next->next->content)
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
