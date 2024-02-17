/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:35:42 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/17 14:38:38 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// static int	ft_check(int signe)
// {
// 	if (signe < 0)
// 		return (0);
// 	return (-1);
// // }
// static int	ft_isspace(char c)
// {
// 	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
// 		|| c == '\r' || c == ' ')
// 		return (1);
// 	return (0);
// }

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
		msg_error(-2,  "00000000");
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			msg_error(-2,  "1");
		r = r * 10 +(str[i] - 48);
		if (((r * n) > INT_MAX ) || ((r * n) < INT_MIN))
			msg_error(-2,  "Out of int range");
		i++;
	}
	return (r * n);
}
