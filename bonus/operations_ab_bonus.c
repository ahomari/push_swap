/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_ab_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:05:20 by ahomari           #+#    #+#             */
/*   Updated: 2024/03/01 16:16:23 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	swap_ab(t_list **arg_a, t_list **arg_b)
{
	ft_swap(arg_a);
	ft_swap(arg_b);
}

void	rotate_ab(t_list **arg_a, t_list **arg_b)
{
	ft_rotate(arg_a);
	ft_rotate(arg_b);
}

void	reverse_rotate_ab(t_list **arg_a, t_list **arg_b)
{
	ft_reverse_rotate(arg_a);
	ft_reverse_rotate(arg_b);
}
