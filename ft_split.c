/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:23:50 by challeau          #+#    #+#             */
/*   Updated: 2019/11/18 23:22:44 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sep_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

static char	*ft_strnew(const char *s, char c)
{
	int		i;
	int		size;
	char	*dst;

	i = 0;
	size = 0;
	while (s[size] != c && s[size])
		size++;
	if (!(dst = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (i < size)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	char	**dst;

	if (!s)
		return (NULL);
	i = 0;
	if (!(dst = (char **)malloc((ft_sep_count(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!(dst[i++] = ft_strnew(s, c)))
			{
				free(dst);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
		}
	}
	dst[i] = NULL;
	return (dst);
}
