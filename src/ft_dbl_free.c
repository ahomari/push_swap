/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbl_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahomari <ahomari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:15:54 by ahomari           #+#    #+#             */
/*   Updated: 2024/02/15 13:40:37 by ahomari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	*ft_free(char **strs)
{
	int	i;

	i = 0;
	while (**strs)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}