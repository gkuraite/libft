/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkuraite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:23:02 by gkuraite          #+#    #+#             */
/*   Updated: 2017/11/17 12:40:21 by gkuraite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <string.h>

size_t		ft_strlen(char *str);
char		*ft_strdup(const char *src);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t nb);
//size_t		ft_strlcat(char *s1, const char *s2, size_t size);
//char		*ft_strchr(const char *s, int c);
//char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *str, const char *to_find);
//char		*ft_strnstr(const char *str, const char *to_find);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

#endif
