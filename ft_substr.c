/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:04:52 by challeau          #+#    #+#             */
/*   Updated: 2019/11/07 03:44:51 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*dst;
	size_t	size;

	i = 0;
	size = len - start;
	if (!(dst = (char *)malloc((size + 1) * sizeof(char))) || !s)
		return (NULL);
	while (len--)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}
