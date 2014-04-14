/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 09:24:47 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/03 10:29:41 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				ft_lstaddend(t_list **alst, t_list *new)
{
	t_list			*save;
	t_list			*current;

	save = *alst;
	current = *alst;
	while (current->next)
		current = current->next;
	current->next = new;
	*alst = save;
}
