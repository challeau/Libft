/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:04:52 by challeau          #+#    #+#             */
/*   Updated: 2019/11/16 02:05:18 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (!s || s[0] == '\0')
		return (NULL);
	if (start > (unsigned int)ft_strlen(s) || len > (size_t)ft_strlen(s))
	{
		if (!(dst = (char *)malloc(sizeof(char))))
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	if (!(dst = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	s += start;
	while (i < len && *s)
	{
		dst[i++] = *s;
		s++;
	}
	dst[i] = '\0';
	return (dst);
}
