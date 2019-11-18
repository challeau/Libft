/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:04:52 by challeau          #+#    #+#             */
/*   Updated: 2019/11/18 23:27:55 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start || s[0] == '\0')
		return (ft_strdup(""));
	if ((size_t)ft_strlen(s + start) < len)
		len = (size_t)ft_strlen(s + start);
	i = 0;
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
