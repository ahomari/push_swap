/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_checker_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 09:06:22 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/29 18:15:37 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

int	ft_check_sorting(t_list **arg_ab)
{
	t_list	*current;

	if (!*arg_ab)
		msg_error(-2, "KO\n");
	current = *arg_ab;
	while (current->next)
	{
		if (current->content > current->next->content)
			return (1);
		current = current->next;
	}
	return (0);
}

int	ft_check_op(char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		return (0);
	else if (ft_strcmp(str, "sb\n") == 0)
		return (0);
	else if (ft_strcmp(str, "ss\n")  == 0)
		return (0);
	else if (ft_strcmp(str, "pa\n") == 0)
		return (0);
	else if (ft_strcmp(str, "pb\n") == 0)
		return (0);
	else if (ft_strcmp(str, "ra\n") == 0)
		return (0);
	else if (ft_strcmp(str, "rb\n") == 0)
		return (0);
	else if (ft_strcmp(str, "rr\n") == 0)
		return (0);
	else if (ft_strcmp(str, "rra\n") == 0)
		return (0);
	else if (ft_strcmp(str, "rrb\n") == 0)
		return (0);
	else if (ft_strcmp(str, "rrr\n") == 0)
		return (0);
	return	(1);
}

void	check_operation(char *str, t_list **arg_a, t_list **arg_b)
{
	if (ft_strcmp(str, "sa\n") == 0)
		ft_swap(arg_a);
	else if (ft_strcmp(str, "sb\n") == 0)
		ft_swap(arg_b);
	else if (ft_strcmp(str, "ss\n") == 0)
		swap_ab(arg_a, arg_b);
	else if (ft_strcmp(str, "pa\n") == 0)
		ft_push_a(arg_a, arg_b);
	else if (ft_strcmp(str, "pb\n") == 0)
		ft_push_b(arg_a, arg_b);
	else if (ft_strcmp(str, "ra\n") == 0)
		ft_rotate(arg_a);
	else if (ft_strcmp(str, "rb\n") == 0)
		ft_rotate(arg_b);
	else if (ft_strcmp(str, "rr\n") == 0)
		rotate_ab(arg_a, arg_b);
	else if (ft_strcmp(str, "rra\n") == 0)
		ft_reverse_rotate(arg_a);
	else if (ft_strcmp(str, "rrb\n") == 0)
		ft_reverse_rotate(arg_b);
	else if (ft_strcmp(str, "rrr\n") == 0)
		reverse_rotate_ab(arg_a, arg_b);
}

void	appli_operation(char **str, t_list **arg_a, t_list **arg_b)
{
	int i;
	
	i = 0;
	while (str && str[i])
	{
		check_operation(str[i], arg_a, arg_b);
		i++;
	}
	if (ft_lstsize(*arg_b) == 0 && ft_check_sorting(arg_a) == 0)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);

}
