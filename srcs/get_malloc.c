/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 17:00:38 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/16 13:42:09 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

t_zone						*get_malloc(void)
{
	static t_zone			*ptr_malloc = NULL;

	if (!ptr_malloc)
		ptr_malloc = mmap(0, PAGE, PROT_WRITE | PROT_READ,
				MAP_ANON | MAP_PRIVATE, -1, 0);
	return (ptr_malloc);
}
