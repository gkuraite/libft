/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkuraite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:43:34 by gkuraite          #+#    #+#             */
/*   Updated: 2017/11/25 14:39:30 by gkuraite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		k;
	int		j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[k])
		{
			j = i;
			while (to_find[k] == str[j] && to_find[k])
			{
				j++;
				k++;
			}
			if (to_find[k] == '\0')
				return ((char *)(void *)&str[i]);
			k = 0;
		}
		if (to_find[k] == 0)
			return ((char *)(void *)str);
		i++;
	}
	return (0);
}
