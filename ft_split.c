/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:23:50 by challeau          #+#    #+#             */
/*   Updated: 2019/11/08 02:35:08 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sep_count(char const *s, char c)
{
	int	i;
	int	flg;

	i = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		flg = 0;
		while (*s == c)
		{
			if (flg == 0)
			{
				i++;
				flg++;
			}
			s++;
		}
		s++;
	}
	return (i);
}

char	*ft_strnew(const char *s, char c)
{
	int		i;
	char	*dst;

	i = 0;
	while (s[i] != c)
		i++;
	if (!(dst = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i] != c)
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

	i = 0;
	sep_nb = ft_sep_count(s, c);
	if (!(dst = (char **)malloc((sep_nb + 1) * sizeof(char *))))
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
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
