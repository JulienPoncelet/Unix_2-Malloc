/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 17:09:58 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 17:58:39 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int							ptr_is_in_this_zone(void *ptr, t_zone *current)
{
	unsigned long long		

	roof = NULL;
	printf("%p\n", current);
	if (current->type == LARGE)
		roof = &(current->data) + (current->size[0] / 8);
	else if (current->type == SMALL)
		roof = current + (M * PAGE / 8);
	else if (current->type == TINY)
		roof = current + (N * PAGE / 8);
	if ((unsigned long long)ptr > (unsigned long long)current)
		if ((unsigned long long)ptr < (unsigned long long)roof)
			printf("%d\n", current->type);
	return (0);
}

void						free(void *ptr)
{
	static t_zone			*ptr_free = NULL;
	t_zone					*current;

	if (!ptr_free)
		ptr_free = get_malloc();
	current = ptr_free;
	while (42)
	{
		if (ptr_is_in_this_zone(ptr, current))
			;//FREE THIS;
		if (current->next)
			current = current->next;
		else
			break ;
	}
}
