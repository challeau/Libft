/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:58:09 by challeau          #+#    #+#             */
/*   Updated: 2019/11/07 18:02:27 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*tmp1;
	char		*tmp2;
	char		*d;
	char		*s;

	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		tmp1 = s + (n - 1);
		tmp2 = d + (n - 1);
		while (n--)
			*tmp1-- = *tmp2--;
	}
	else
		while (n--)
			*d++ = *s++;
	return (dst);
}
