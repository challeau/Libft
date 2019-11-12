/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: challeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:32:02 by challeau          #+#    #+#             */
/*   Updated: 2019/11/11 22:25:49 by challeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*begin;

	if (alst && (*alst) && new)
	{
		begin = (*alst);
		while (begin->next != NULL)
			begin = begin->next;
		begin->next = new;
	}
	else
		(*alst) = new;
}
