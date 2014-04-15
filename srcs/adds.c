/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adds.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 10:15:22 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 17:02:15 by jponcele         ###   ########.fr       */
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
		current->size[i] = 0;
		i++;
	}
	ft_bzero(current, size);
	current->type = type;
	return (current);
}

void					*add_tiny(t_zone *ptr_malloc, size_t size)
{
	t_zone				*current;
	int					i;

	current = ptr_malloc;
	while (current->type != TINY || current->index == MAX_ALLOC)
	{
		if (!current->next)
			current->next = add_new_zone(current->next, TINY, N * PAGE);
		current = current->next;
	}
	i = 0;
	while (current->size[i])
		i++;
	current->size[i] = size;
	current->index = change_index(current);
	return (&(current->data) + i * n / 8);
}

void					*add_small(t_zone *ptr_malloc, size_t size)
{
	t_zone				*current;
	int					i;

	current = ptr_malloc;
	while (current->type != SMALL || current->index == MAX_ALLOC)
	{
		if (!current->next)
			current->next = add_new_zone(current->next, SMALL, M * PAGE);
		current = current->next;
	}
	i = 0;
	while (current->size[i])
		i++;
	current->size[i] = size;
	current->index = change_index(current);
	return (&(current->data) + i * m / 8);
}

void					*add_large(t_zone *ptr_malloc, size_t size)
{
	t_zone				*current;

	current = ptr_malloc;
	while (current->next)
		current = current->next;
	current->next = add_new_zone(current->next, LARGE, size);
	current = current->next;
	current->size[0] = size;
	current->index = 1;
	return (&(current->data));
}


