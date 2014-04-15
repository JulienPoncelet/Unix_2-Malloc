/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:13:28 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 12:22:23 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void						*ft_malloc(size_t size)
{
	static int				step = 0;
	static t_zone			*ptr_malloc = NULL;
	void					*ptr_added;

	if (step == 0)
	{
		step = 1;
		show_alloc_mem();
		ft_bzero(ptr_malloc, PAGE);
		ptr_malloc->type = TINY;
	}
	else if (step == 1)
	{
		step = 2;
		ptr_malloc = (t_zone *)mmap(0, PAGE,
				PROT_WRITE | PROT_READ, MAP_ANON | MAP_PRIVATE, -1, 0);
		return (ptr_malloc);
	}
	if (!size)
		return (NULL);
	else if (size < n)
		ptr_added = add_tiny(ptr_malloc, size);
	else if (size < m)
		ptr_added = add_small(ptr_malloc, size);
	else
		ptr_added = add_large(ptr_malloc, size);
	return (ptr_added);
}
