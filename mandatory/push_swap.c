/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:47:40 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/15 21:31:51 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_check(char *av)
{
	t_push_swap ps;
	
	ps.i = 0;
	while (av[ps.i])
	{
		if (av[ps.i] == ' ')
			return (1);
		else if (av[ps.i] == '+' || av[ps.i] == '-')
			return (2);
		ps.i++;
	}
	return (0);
}

void	ft_print(char **str)
{
	t_push_swap ps;
	
	ps.i = 0;
	while (str[ps.i])
	{
		if (ft_check(str[ps.i]) == 2)
			msg_error(-2, "error!!");
		ps.n = ft_atoi(str[ps.i]);
		printf("%d\n", ps.n);
		ps.i++;
	}
}

void	parsing(int ac, char **av)
{
	t_push_swap	ps;
	
	if (ac < 2)
		exit(1);
	else if (ac == 2 && !av[1][0])
		msg_error(-2, "error !!");
	else
	{
		ps.i = 1;
		while (av[ps.i])
		{
			if (ft_check(av[ps.i]) == 1)
			{
				ps.argv = ft_split(av[ps.i], ' ');
				ft_print(ps.argv);
				ft_free(ps.argv);
			}
			else
			{
				if (ft_check(av[ps.i]) == 2)
					msg_error(-2, "error!!");
				ps.n = ft_atoi(av[ps.i]);
				printf("%d\n", ps.n);
			}
			ps.i++;
		}
	}
}

int	main(int ac, char **av)
{
	// printf("%s=======>\n", av[2]);
	parsing(ac, av);
}