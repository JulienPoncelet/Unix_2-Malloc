/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 10:44:14 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 11:54:10 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, sizeof((*alst)->content));
	free(*alst);
	*alst = NULL;
}
