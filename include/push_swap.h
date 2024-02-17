/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:48:07 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/17 10:52:06 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <libc.h>

typedef struct s_list
{
	int			content;
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



#endif