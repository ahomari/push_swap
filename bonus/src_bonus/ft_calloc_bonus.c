/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:39:51 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/26 21:43:36 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	int		len;
	char	*ptr;

	ptr = (void *)(malloc(count * size));
	if (!ptr)
		return (NULL);
	len = count * size;
	i = 0;
	while (len--)
		ptr[i++] = 0;
	return (ptr);
}