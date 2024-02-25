/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_linkedlist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:42:54 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/24 13:13:55 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_printf(t_list *a)
{
	t_list *current;
	
	current = a;

	while (current)
	{
		printf("content : %d   index : %d\n", current->content, current->index);
		
		current = current->next;
	}
}