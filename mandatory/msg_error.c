/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msg_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:09:47 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/14 15:14:00 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_print_msg(char *msg)
{
	int i;

	i = 0;
	while (msg[i])
	{
		write (2, &msg[i], 1);
		i++;
	}
	exit(1);
}
void	msg_error(int num, char *msg)
{
	if (num == -1)
		ft_print_msg(msg);
	else if (num == -2)
		ft_print_msg(msg);
}