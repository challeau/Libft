/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:46:13 by challeau          #+#    #+#             */
/*   Updated: 2019/11/07 05:30:23 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = ft_intlen(n);
	if (n == -2147483648)
	{
		dst = (char*)malloc(sizeof(int) * 12);
		return (dst = "-2147483648");
	}
	if (!(dst = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		dst[i++] = '-';
	}
	dst[len--] = '\0';
	while (len >= i)
	{
		dst[len--] = (n % 10) + 48;
		n /= 10;
	}
	return (dst);
}
