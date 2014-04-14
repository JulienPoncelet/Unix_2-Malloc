/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 10:34:56 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 11:54:19 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst && f)
	{
		while (lst->next)
		{
			(*f)(lst);
			lst = lst->next;
		}
		(*f)(lst);
	}
}
