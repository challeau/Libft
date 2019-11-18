/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:57:33 by challeau          #+#    #+#             */
/*   Updated: 2019/11/12 00:57:30 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*tmp;

	if (!lst || !(*lst) || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		if (curr->next)
			tmp = curr->next;
		else
			tmp = NULL;
		(*del)(curr->content);
		free(curr);
		curr = tmp;
	}
	*lst = NULL;
}
