/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:05:20 by ahomari           #+#    #+#             */
/*   Updated: 2024/03/01 16:29:19 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_ab(t_list **arg_a, t_list **arg_b)
{
	ft_swap(arg_a, 's');
	ft_swap(arg_b, 's');
	ft_putendl_fd("ss", 1);
}

void	rotate_ab(t_list **arg_a, t_list **arg_b)
{
	ft_rotate(arg_a, 'r');
	ft_rotate(arg_b, 'r');
	ft_putendl_fd("rr", 1);
}

void	reverse_rotate_ab(t_list **arg_a, t_list **arg_b)
{
	ft_reverse_rotate(arg_a, 'r');
	ft_reverse_rotate(arg_b, 'r');
	ft_putendl_fd("rrr", 1);
}
