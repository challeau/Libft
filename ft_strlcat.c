/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:28:10 by challeau          #+#    #+#             */
/*   Updated: 2019/11/05 16:15:11 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = 0;
	src_len = ft_strlen(src);
	while (dest[i] && i++ < size)
		dest_len++;
	if (dest_len >= size)
		return (dest_len + src_len);
	i = 0;
	while (i < size - 1)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
