/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:39:48 by ahomari           #+#    #+#             */
/*   Updated: 2024/03/01 16:40:16 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap_bonus.h"

void	check_stack_a(int n, t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->content == n)
			msg_error(-2, "Error\n");
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
	int		i;

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
	int		i;
	char	**argv;

	if (ac < 2)
		exit(0);
	else if (ac == 2 && !av[1][0])
		msg_error(-2, "Error\n");
	else
	{
		i = 1;
		while (i < ac)
		{
			argv = ft_split(av[i], ' ');
			if (!argv || !argv[0])
				msg_error(-2, "Error\n");
			addstack_a(argv, a);
			ft_free(argv);
			i++;
		}
		index_stack_a(a);
	}
}

char	**ft_realloc(char **ptr, char *str, size_t new_size)
{
	char	**new_ptr;
	size_t	i;

	i = 0;
	new_ptr = (char **)malloc(sizeof(char *) * (new_size + 1));
	if (!new_ptr)
		return (NULL);
	while (ptr && ptr[i])
	{
		new_ptr[i] = ptr[i];
		ptr[i] = NULL;
		i++;
	}
	new_ptr[i] = str;
	i++;
	new_ptr[i] = NULL;
	free(ptr);
	return (new_ptr);
}
