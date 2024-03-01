/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:38:07 by ahomari           #+#    #+#             */
/*   Updated: 2024/03/01 16:40:00 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	**ptr;
	char	*str;
	int		i;

	a = NULL;
	b = NULL;
	ptr = NULL;
	i = 0;
	parsing(ac, av, &a);
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		if (ft_check_op(str) == 1)
			msg_error(-2, "Error\n");
		i++;
		ptr = ft_realloc(ptr, str, i);
	}
	appli_operation(ptr, &a, &b);
	exit(0);
}
