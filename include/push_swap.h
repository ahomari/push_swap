/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:48:07 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/25 20:08:20 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <libc.h>

typedef struct s_list
{
	int 			index;
	int				content;
	struct s_list	*next;
}					t_list;




void	msg_error(int num, char *msg);
int		ft_atoi(char *str);
char	**ft_split(char *s, char c);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
char	*ft_strdup(char *s1);
size_t	ft_strlen(char *str);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_free(char **strs);
int		ft_isdigit(char c);
void	ft_printf(t_list *a);
void	ft_swap(t_list **arg, char c);
int		ft_lstsize(t_list *lst);
void	swap_ab(t_list **arg_a, t_list **arg_b);
void	ft_rotate(t_list **arg_ab, char c);
void	ft_putendl_fd(char *s, int fd);
void	ft_reverse_rotate(t_list **arg_ab, char c);
void	ft_push_a(t_list **arg_a, t_list **arg_b);
void	ft_push_b(t_list **arg_a, t_list **arg_b);
void	sort_3(t_list **arg_a);
int		ft_check_sorting(t_list **arg_ab);
void	sort_5(t_list **arg_a, t_list **arg_b);
void	ft_sorting(t_list **arg_a, t_list **arg_b);
void	rotate_ab(t_list **arg_a, t_list **arg_b);
void	ft_rotate(t_list **arg_ab, char c);
void	ft_sorting2(t_list **arg_a, t_list **arg_b);
int		ft_max(t_list **arg_ab);
int		ft_index_b(int index, t_list **arg_b);



#endif