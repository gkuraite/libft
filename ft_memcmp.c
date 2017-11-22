/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkuraite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:38:38 by gkuraite          #+#    #+#             */
/*   Updated: 2017/11/22 20:32:22 by gkuraite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n-- && str1++ && str2++)
	{
		i = *str1 - *str2;
		if (i != 0)
			return (i);
	}
	return (0);
}
