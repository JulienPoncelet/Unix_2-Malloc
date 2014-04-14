/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:20:40 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 11:54:56 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				*ft_memalloc(size_t size)
{
	void			*mem;

	mem = NULL;
	mem = (void *) malloc(size);
	if (!mem)
		return (NULL);
	return (mem);
}
