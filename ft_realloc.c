/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:52:15 by challeau          #+#    #+#             */
/*   Updated: 2020/02/08 13:52:44 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_realloc(const char *ptr, int new_size)
{
	int		curr_size;
	char	*new;
	if (!ptr)
	{
		if (!(new = (char *)malloc(new_size)))
			return (NULL);
		return (new);
	}
	curr_size = ft_strlen(ptr);
	if (!(new = (char *)malloc(curr_size + new_size)))
		return (NULL);
	new[--curr_size] = '\0';
	while (curr_size-- >= 0)
		new[curr_size] = ptr[curr_size];
	free (ptr);
	ptr = NULL;
	return (new);
}
