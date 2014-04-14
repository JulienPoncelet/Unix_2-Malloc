/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 11:00:47 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/03 14:26:12 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				ft_lstdel(t_list **alst, void(*del)(void *, size_t))
{
	if (!alst || !*alst)
		return ;
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}
