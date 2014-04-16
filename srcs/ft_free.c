/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 17:09:58 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/16 12:16:15 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int							free_large(t_zone *ptr_free)
{
	t_zone					*current;
	t_zone					*current_prev;

	current = ptr_free;
	while (42)
	{
		if (current->type == LARGE && current->size[0] == 0)
		{
			if (current->next)
				current_prev->next = current->next;
			else
				current_prev->next = NULL;
			munmap(current, 2 * PAGE);
			return (42);
		}
		if (current->next)
		{
			current_prev = current;
			current = current->next;
		}
		else
			break ;
	}
	return (0);
}

void						free(void *ptr)
{
	static t_zone			*ptr_free = NULL;
	t_zone					*current;
	int						ret;

	if (!ptr_free)
		ptr_free = get_malloc();
	current = ptr_free;
	while (42)
	{
		if ((ret = found_inter(ptr, current)) != -1)
		{
			if (current->type == TINY)
				ret = ret / n;
			else if (current->type == SMALL)
				ret = ret / m;
			else
				ret = 0;
			current->size[ret] = 0;
			if (current->type == LARGE)
				if (free_large(ptr_free) == 42)
					return ;
		}
		if (current->next)
			current = current->next;
		else
			break ;
	}
}
