/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 10:21:15 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/19 18:22:24 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void		*new_zone(t_zone *all, void *ptr, t_zone *current, size_t size)
{
	void					*new_ptr;

	new_ptr = malloc(size);
	ft_memcpy(new_ptr, ptr, size);
	free(ptr);
	return (new_ptr);
}

void		*ft_realloc(t_zone *all, void *ptr, t_zone *current, size_t size)
{
	int						new_type;
	int						ret;

	if (size < SMALL_N)
		new_type = TINY;
	else if (size < SMALL_M)
		new_type = SMALL;
	else
		new_type = LARGE;
	if (new_type == current->type)
	{
		ret = found_inter(ptr, current);
		if (new_type == TINY)
			ret = ret / SMALL_N;
		else if (new_type == SMALL)
			ret = ret / SMALL_M;
		else
			ret = 0;
		current->size[ret] = size;
		return (ptr);
	}
	else
		return (new_zone(all, ptr, current, size));
}

void		*realloc(void *ptr, size_t size)
{
	static t_zone			*ptr_realloc = NULL;
	t_zone					*current;
	int						ret;

	if (size <= 0)
		return (NULL);
	if (!ptr_realloc)
		ptr_realloc = get_malloc();
	current = ptr_realloc;
	while (42)
	{
		if ((ret = found_inter(ptr, current)) != -1)
			return (ft_realloc(ptr_realloc, ptr, current, size));
		if (!current->next)
			break ;
		current = current->next;
	}
	return (NULL);
}
