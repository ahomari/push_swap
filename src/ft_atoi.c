/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:35:42 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/17 12:06:14 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// static int	ft_check(int signe)
// {
// 	if (signe < 0)
// 		return (0);
// 	return (-1);
// }
static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int				i;
	int				n;
	long long		r;

	i = 0;
	n = 1;
	r = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		r = r * 10 +(str[i] - 48);
		i++;
	}
	if (((r * n) > INT_MAX ) || ((r * n) < INT_MIN))
		msg_error(-2,  "Out of int range");
	return (r * n);
}
