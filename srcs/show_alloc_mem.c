/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_alloc_mem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 10:18:18 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 12:22:23 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void					show_alloc_mem(void)
{
	static t_zone		*ptr_view = NULL;

	if (!ptr_view)
		ptr_view = ft_malloc(0);
	else
	{
		while (42)
		{
			printf("Ici on a une zone memoire de type : %d et d'addresse : %p\n", ptr_view->type, ptr_view);
			if (ptr_view->next)
				ptr_view = ptr_view->next;
			else
				break ;
		}
	}
}
