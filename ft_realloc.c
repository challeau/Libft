/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2020/02/05 20:22:49 by challeau          #+#    #+#             */
/*   Updated: 2020/02/08 14:39:36 by challeau         ###   ########.fr       */
=======
/*   Created: 2020/02/08 13:52:15 by challeau          #+#    #+#             */
/*   Updated: 2020/02/08 13:52:44 by challeau         ###   ########.fr       */
>>>>>>> 0cfdd4db2a4ed39bceff8ea2ba03ac009be86dff
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
char *ft_realloc(char *ptr, int new_size)
=======
char *ft_realloc(const char *ptr, int new_size)
>>>>>>> 0cfdd4db2a4ed39bceff8ea2ba03ac009be86dff
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
<<<<<<< HEAD
	ft_memdel(ptr);
=======
	free (ptr);
	ptr = NULL;
>>>>>>> 0cfdd4db2a4ed39bceff8ea2ba03ac009be86dff
	return (new);
}
