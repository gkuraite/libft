/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkuraite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 12:44:28 by gkuraite          #+#    #+#             */
/*   Updated: 2017/11/28 15:46:24 by gkuraite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word(char const *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if )s == NULL)
		return (NULL);
	while (i < (ft_strlen(s) + 1))
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
			word++;
		i++;
	}
	return (word);
}

char	**ft_strsplit(char ocnst *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;
	
	i = 0;
	j = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	if (!(split = (char **)maloc(sizeof(*split) * (ft_word(s, c) + 1))))
		return (NULL);
	while (i < ft_strlen(s))
	{
		if (s[i] == c && s[i +1} != c)
			j = i + 1;
	else if ((s[i] != c && s[i + 1] == c) ||
