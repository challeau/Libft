/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:05:37 by challeau          #+#    #+#             */
/*   Updated: 2019/11/07 21:52:45 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	char			*str;

	str = (char *)s;
	if (to_find[0] == '\0')
		return (str);
	if (len == 0)
		return (NULL);
	while (*str && (size_t)ft_strlen(to_find) <= len--)
	{
		if (ft_memcmp(str, to_find, ft_strlen(to_find)) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
