/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:50:56 by challeau          #+#    #+#             */
/*   Updated: 2019/11/11 17:45:51 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *dst;

	if (!(dst = malloc(nmemb * size)))
		return (NULL);
	if (dst)
		ft_bzero(dst, nmemb * size);
	return (dst);
}
