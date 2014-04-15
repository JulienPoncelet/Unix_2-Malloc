/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adds.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 10:15:22 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 12:22:23 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void					*add_new_zone(t_zone *current, int type, size_t size)
{
	int					i;

	current = (t_zone *)mmap(0, size, PROT_WRITE | PROT_READ,
			MAP_ANON | MAP_PRIVATE, -1, 0);
	i = 0;
	while (i < MAX_ALLOC)
	{
		current->tab[i] = NULL;
		current->free[i] = 1;
		i++;
	}
	ft_bzero(current, size);
	current->type = type;
	return (current);
}

void					*add_tiny(t_zone *ptr_malloc, size_t size)
{
	t_zone				*current;
	void				*ptr_added;

	current = ptr_malloc;
	while (current->type != TINY && current->index < MAX_ALLOC)
	{
		if (!current->next)
			current->next = add_new_zone(current, TINY, N * PAGE);
		current = current->next;
	}
	ptr_added = NULL;
	return (ptr_added);
	(void)size;
}

void					*add_small(t_zone *ptr_malloc, size_t size)
{
	t_zone				*current;
	void				*ptr_added;

	current = ptr_malloc;
	while (current->type != SMALL && current->index < MAX_ALLOC)
	{
		if (!current->next)
			current->next = add_new_zone(current, SMALL, M * PAGE);
		current = current->next;
	}
	ptr_added = NULL;
	return (ptr_added);
	(void)size;
}

void					*add_large(t_zone *ptr_malloc, size_t size)
{
	t_zone				*current;
	void				*ptr_added;

	current = ptr_malloc;
	while (current->next)
		current = current->next;
	current->next = add_new_zone(current, LARGE, size);
	ptr_added = NULL;
	return (ptr_added);
}


