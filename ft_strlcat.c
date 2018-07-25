/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkuraite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:39:24 by gkuraite          #+#    #+#             */
/*   Updated: 2018/07/25 17:34:32 by gkuraite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;

	i = 0;
	while (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (dst[i] && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src)); 
	// if return < size, src concatenated to dest
	// if return >= size, src was truncated
}
