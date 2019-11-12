/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 23:06:51 by challeau          #+#    #+#             */
/*   Updated: 2019/11/11 19:23:39 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_set(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == *s)
			return (1);
		i++;
	}
	return (0);
}

int		ft_minus_len(char const *s, char const *set)
{
	int i;

	i = 0;
	while (ft_is_set(s, set) == 1 && *s)
		s++;
	while (*s)
	{
		i++;
		s++;
	}
	while (ft_is_set(--s, set) == 1)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*dst;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	size = ft_minus_len(s1, set);
	if (size < 0)
	{
		if (!(dst = (char *)malloc(1 * sizeof(char))))
			return (NULL);
		return (dst = "\0");
	}
	if (!(dst = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (ft_is_set(s1, set) == 1 && *s1)
		s1++;
	while (*s1)
	{
		dst[i++] = *s1;
		s1++;
	}
	dst[size] = '\0';
	return (dst);
}
