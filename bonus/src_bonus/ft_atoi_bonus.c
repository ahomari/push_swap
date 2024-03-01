/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:35:42 by ahomari           #+#    #+#             */
/*   Updated: 2024/03/01 16:21:36 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

int	ft_atoi(char *str)
{
	int				i;
	int				n;
	long long		r;

	i = 0;
	n = 1;
	r = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	if (!str[i])
		msg_error(-2, "Error\n");
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			msg_error(-2, "Error\n");
		r = r * 10 +(str[i] - 48);
		if (((r * n) > INT_MAX) || ((r * n) < INT_MIN))
			msg_error(-2, "Error\n");
		i++;
	}
	return (r * n);
}
