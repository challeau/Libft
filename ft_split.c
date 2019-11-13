/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:23:50 by challeau          #+#    #+#             */
/*   Updated: 2019/11/13 19:32:39 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sep_count(char const *s, char c)
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

char	*ft_strnew(const char *s, char c)
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		sep_nb;
	char	**dst;

	if (!s || !c)
		return (NULL);
	i = 0;
	sep_nb = ft_sep_count(s, c);
	if (!(dst = (char **)malloc((sep_nb + 1) * sizeof(char *))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			dst[i] = ft_strnew(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	dst[i] = NULL;
	return (dst);
}
