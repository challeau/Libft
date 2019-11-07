/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 23:06:51 by challeau          #+#    #+#             */
/*   Updated: 2019/11/07 18:07:44 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_set(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (set[i] == s[i])
	{
		i++;
		if (set[i] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*dst;

	i = 0;
	size = ft_strlen(s1);
	if (!s1 || !(dst = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (ft_is_set(s1, set) == 1 && *s1)
		s1 += ft_strlen(set);
	while (*s1 && ft_is_set(s1, set) == 0)
	{
		dst[i++] = *s1;
		s1++;
	}
	while (ft_is_set(s1 - ft_strlen(set), set) == 1 && *s1)
		i -= ft_strlen(set);
	dst[i] = '\0';
	return (dst);
}
