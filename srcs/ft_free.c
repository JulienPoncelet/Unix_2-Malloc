/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 17:09:58 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/18 14:48:28 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int						free_large(t_zone *current, t_zone *current_prev)
{
	if (!current->size[0])
	{
		if (current->next)
			current_prev->next = current->next;
		else
			current_prev->next = NULL;
		munmap(current, current->tmp_size + sizeof(t_zone));
		return (42);
	}
	return (0);
}

int						free_tiny_small(t_zone *all, t_zone *cur, t_zone *prev)
{
	if (!cur->index && cur != all)
	{
		if (cur->next)
			prev->next = cur->next;
		else
			prev->next = NULL;
		if (cur->type == TINY)
			munmap(cur, N * PAGE);
		else
			munmap(cur, M * PAGE);
		return (42);
	}
	return (0);
}

int						free_map(t_zone *ptr_free)
{
	t_zone				*current;
	t_zone				*current_prev;

	current = ptr_free;
	while (42)
	{
		if (current->type == LARGE)
		{
			if (free_large(current, current_prev) == 42)
				return (42);
		}
		else
		{
			if (free_tiny_small(ptr_free, current, current_prev) == 42)
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

int						modif_ret(int ret, t_zone *current)
{
	if (current->type == TINY)
		ret = ret / SMALL_N;
	else if (current->type == SMALL)
		ret = ret / SMALL_M;
	else
		ret = 0;
	return (ret);
}

void					free(void *ptr)
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
			ret = modif_ret(ret, current);
			ptr_free->total = ptr_free->total - current->size[ret];
			current->tmp_size = current->size[ret];
			current->size[ret] = 0;
			current->index = change_index(current);
			if (current->type == LARGE)
				if (free_map(ptr_free) == 42)
					break ;
		}
		if (!current->next)
			break ;
		current = current->next;
	}
}
