/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkuraite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:44:14 by gkuraite          #+#    #+#             */
/*   Updated: 2017/11/28 12:42:14 by gkuraite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*str;
	int		cpy;

	start = 0;
	cpy = 0;
	end = ft_strlen(s) - 1;
	if (s == NULL)
		return (NULL);
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (start >= end)
		start = end + 1;
	if (!(str = (char*)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	while (start <= end)
		str[cpy++] = s[start++];
	str[cpy] = '\0';
	return (str);
}
