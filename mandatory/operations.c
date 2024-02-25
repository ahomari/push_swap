/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 18:11:00 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/25 22:45:50 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap(t_list **arg_ab, char c)
{
	t_list	*current;
	t_list	*tmp;

	current = *arg_ab;
	if (ft_lstsize(current) < 2)
		return ;
	tmp = (*arg_ab)->next;
	current->next = tmp->next;
	tmp->next = current;
	*arg_ab = tmp;
	if (c == 'a')
		ft_putendl_fd("sa", 1);
	else if (c == 'b')
		ft_putendl_fd("sb", 1);
}

void	ft_rotate(t_list **arg_ab, char c)
{
	t_list	*current;
	t_list	*tmp;
	t_list	*rotate;

	current = *arg_ab;
	if (ft_lstsize(current) < 2)
		return ;
	tmp = ft_lstlast(*arg_ab);
	rotate = (*arg_ab)->next;
	tmp->next = current;
	current->next = NULL;
	*arg_ab = rotate;
	if (c == 'a')
		ft_putendl_fd("ra", 1);
	else if (c == 'b')
		ft_putendl_fd("rb", 1);
}
void	ft_reverse_rotate(t_list **arg_ab, char c)
{
	t_list *tmp;
	t_list *current;

	current = *arg_ab;
	if (ft_lstsize(current) < 2)
		return ;
	while (current->next->next)
		current = current->next;
	tmp = current->next;
	current->next = NULL;
	tmp->next = *arg_ab;
	*arg_ab = tmp;
	if (c == 'a')
		ft_putendl_fd("rra", 1);
	else if (c == 'b')
		ft_putendl_fd("rrb", 1);
}
void	ft_push_b(t_list **arg_a, t_list **arg_b)
{
	t_list *current;

	current = *arg_a;
	
	*arg_a = current->next;
	ft_lstadd_front(arg_b, current);
	ft_putendl_fd("pb", 1);
}
void	ft_push_a(t_list **arg_a, t_list **arg_b)
{
	t_list *current;

	current = *arg_b;
	
	*arg_b = current->next;
	ft_lstadd_front(arg_a, current);
	ft_putendl_fd("pa", 1);
}
