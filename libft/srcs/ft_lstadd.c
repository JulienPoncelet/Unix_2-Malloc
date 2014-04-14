/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:50:09 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 11:53:51 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				ft_lstadd(t_list **alst, t_list *new_link)
{
	t_list			**save;

	if (!alst)
		*alst = new_link;
	save = alst;
	new_link->next = *save;
	alst = &new_link;
}
