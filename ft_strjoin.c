/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:34:08 by challeau          #+#    #+#             */
/*   Updated: 2019/11/07 03:20:04 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	len1;
	size_t	len2;
	char	*dst;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(dst = (char *)malloc((len1 + len2 + 1) * sizeof(char))))
		return (NULL);
	while (*s1)
	{
		dst[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		dst[i++] = *s2;
		s2++;
	}
	dst[i] = '\0';
	return (dst);
}
