/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:48:07 by ahomari           #+#    #+#             */
/*   Updated: 2024/03/01 16:54:39 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <libc.h>

typedef struct s_list
{
	int				index;
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
int		ft_isdigit(char c);
void	ft_swap(t_list **arg);
int		ft_lstsize(t_list *lst);
void	swap_ab(t_list **arg_a, t_list **arg_b);
void	ft_rotate(t_list **arg_ab);
void	ft_reverse_rotate(t_list **arg_ab);
void	ft_push_a(t_list **arg_a, t_list **arg_b);
void	ft_push_b(t_list **arg_a, t_list **arg_b);
void	rotate_ab(t_list **arg_a, t_list **arg_b);
void	ft_rotate(t_list **arg_ab);
char	*ft_strjoinn(char *s1, char *s2);
char	*get_next_line(int fd);
char	*ft_strcpy(char *dst, char const *src, size_t len);
int		ft_strchr(char *s, char c);
void	*ft_free(char **strs);
int		ft_strcmp(char *s1, char *s2);
void	reverse_rotate_ab(t_list **arg_a, t_list **arg_b);
int		ft_check_op(char *str);
void	appli_operation(char **str, t_list **arg_a, t_list **arg_b);
int		ft_check_sorting(t_list **arg_ab);
void	ft_putendl_fd(char *s, int fd);
void	reverse_rotate_ab(t_list **arg_a, t_list **arg_b);
void	parsing(int ac, char **av, t_list **a);
char	**ft_realloc(char **ptr, char *str, size_t new_size);

#endif