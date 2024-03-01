/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:44:52 by ahomari           #+#    #+#             */
/*   Updated: 2024/03/01 16:46:34 by ahomari          ###   ########.fr       */
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

int	ft_max(t_list **arg_ab)
{
	t_list	*current;
	int		max;

	current = *arg_ab;
	max = current->index;
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
	t_list	*current;
	int		i;

	i = 0;
	current = *arg_b;
	while (current)
	{
		i++;
		if (index == current->index)
			return (i);
		current = current->next;
	}
	return (0);
}
