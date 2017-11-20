/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkuraite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:03:27 by gkuraite          #+#    #+#             */
/*   Updated: 2017/11/20 12:22:21 by gkuraite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	while (n > 0)
	{
		i = (unsigned char)*s1 - (unsigned char)*s2;
		if (i != 0)
			return (i);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
