/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:05:37 by challeau          #+#    #+#             */
/*   Updated: 2019/11/07 19:02:54 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	str = (char *)s;
	if (to_find[0] == '\0')
		return (str);
	while (i++ <= len - 1)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j++] == '\0')
				return (&str[i]);
		}
	}
	return (0);
}
