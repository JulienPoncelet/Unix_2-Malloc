/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:13:28 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/16 14:00:09 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_malloc.h"

void						*malloc(size_t size)
{
	static t_zone			*ptr_malloc = NULL;
	struct rlimit			rlp;

	if (!ptr_malloc)
	{
		ptr_malloc = get_malloc();
		ft_bzero(ptr_malloc, PAGE);
		ptr_malloc->type = TINY;
	}
	if (size <= 0)
		return (NULL);
	getrlimit(RLIMIT_MEMLOCK, &rlp);
	if (ptr_malloc->total + size > rlp.rlim_cur)
		return (NULL);
	ptr_malloc->total = ptr_malloc->total + size;
	if (size < SMALL_N)
		return (add_tiny(ptr_malloc, size));
	else if (size < SMALL_M)
		return (add_small(ptr_malloc, size));
	else
		return (add_large(ptr_malloc, size));
	return (NULL);
}
