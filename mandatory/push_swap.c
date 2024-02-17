/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:47:40 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/17 14:57:49 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void	check_stack_a(int n, t_list **a)
{
	t_list	*tmp;
	
	tmp = *a;
	while (tmp)
	{
		if (tmp->content == n)
			msg_error(-2, "ERROR");
		tmp = tmp->next;
	}
}

void	addstack_a(char **argv, t_list **a)
{
	int		i;
	int		n;
	t_list	*new;
	

	i = 0;
	while (argv[i])
	{
		n = ft_atoi(argv[i]);
		check_stack_a(n, a);
		new = ft_lstnew(n);
		ft_lstadd_back(a, new);
		i++;
	}
}

void	parsing(int ac, char **av, t_list **a)
{
	int 		i;
	char		**argv;

	if (ac < 2)
		exit(0);
	else if (ac == 2 && !av[1][0])
		msg_error(-2, "error !!");
	else
	{
		i = 1;
		while (i < ac)
		{
			argv = ft_split(av[i], ' ');
			addstack_a(argv, a);
			ft_free(argv);
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	parsing(ac, av, &a);
	ft_printf(a);
	
}