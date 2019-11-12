/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:04:52 by challeau          #+#    #+#             */
/*   Updated: 2019/11/12 05:56:46 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dst;

	i = 0;
	size = ft_strlen(s);
	if (!s)
		return (NULL);
	if (!(dst = (char *)malloc(len * sizeof(char) + 1)))
		return (NULL);
	s += start;
	while (i < len && *s && start < size && len < size)
	{
		dst[i++] = *s;
		s++;
	}
	dst[i] = '\0';
	return (dst);
}
