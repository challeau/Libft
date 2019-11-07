/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:50:56 by challeau          #+#    #+#             */
/*   Updated: 2019/11/05 13:50:57 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *dest;

	if (nmemb == 0 || size == 0)
		return (NULL);
	dest = (void *)malloc((nmemb + 1) * size);
	if (dest)
		ft_bzero(dest, nmemb * size);
	return (dest);
}
