/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:50:56 by challeau          #+#    #+#             */
/*   Updated: 2019/11/09 17:43:00 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *dst;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dst = (void *)malloc((nmemb) * size);
	if (dst)
		ft_bzero(dst, nmemb * size);
	return (dst);
}
