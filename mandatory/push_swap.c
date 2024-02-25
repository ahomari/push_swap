/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:47:40 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/25 22:34:49 by ahomari          ###   ########.fr       */
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

void	index_stack_a(t_list **arg_a)
{
	t_list	*current;
	t_list	*tmp;
	int 	i;

	current = *arg_a;
	while (current)
	{
		tmp = *arg_a;
		i = 0;
		while (tmp)
		{
			if (current->content > tmp->content && current->index == -1)
				i++;
			tmp = tmp->next;
		}
		current->index = i;
		current = current->next;
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
		index_stack_a(a);
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	parsing(ac, av, &a);
	// while (ft_lstsize(a) > 3)
	// 	ft_push_b(&a, &b);
	// ft_printf(a);
	// printf("==================\n");
	// ft_printf(b);
	// printf("==================\n");
	// printf("%d\n", ft_index_b((a)->index - 1 , &b));
	// ft_rotate(&a, 'a');
	// ft_rotate(&a, 'a');
	// ft_rotate(&a, 'a');
	// ft_push_b(&a, &b);
	// ft_printf(b);
	// ft_push_b(&a, &b);
	// ft_push_b(&a, &b);
	// ft_push_a(&a, &b);
	// ft_push_a(&a, &b);
	// ft_swap(&a, 'a');
	// ft_swap(&a, 'a');
	// ft_swap(&a, 'a');
	// ft_swap(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_rotate(&a, 'a');
	// ft_rotate(&a, 'a');
	// ft_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_rotate(&a, 'a');
	// ft_rotate(&a, 'a');
	// ft_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// ft_reverse_rotate(&a, 'a');
	// if (ft_lstsize(a) == 3)
	// 	sort_3(&a);
	// else if (ft_lstsize(a) == 5)
	// 	sort_5(&a, &b);
	ft_sorting(&a, &b);
	// printf("%d\n", ft_check_sorting(&a));
	// ft_printf(a);
	// printf("==================\n");
	// ft_printf(b);
	// printf("==================\n");
	// ft_printf(b);
	// ft_push_b(&a, &b);
	// ft_swap(&a, 'a');
	// ft_printf(b);
	// ft_push_a(&a, &b);  
	// printf("==================\n");
	// ft_printf(b);
	printf("==================%d\n", ft_lstsize(a));
		ft_printf(a);
	// ft_printf(b);	
}