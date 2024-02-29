/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:33:27 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/26 21:44:15 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

char	*ft_strdup(char *s1)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = ft_calloc((ft_strlen(s1) + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}