/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 17:09:58 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 22:57:12 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int							ptr_is_in_this_zone(void *ptr, t_zone *current)
{
	unsigned long long		min;
	unsigned long long		max;
	unsigned long long		check;

	check = (unsigned long long)ptr;
	min = (unsigned long long)&(current->data);
	if (current->type == TINY)
		max = (unsigned long long)current + N * PAGE;
	else if (current->type == SMALL)
		max = (unsigned long long)current + M * PAGE;
	else
		max = (unsigned long long)current + current->size[0];
	if (min <= check && check <= max)
		return ((int)(check - min));
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
		if ((ret = ptr_is_in_this_zone(ptr, current)))
		{
			if (current->type == TINY)
				ret = ret / n;
			else if (current->type == SMALL)
				ret = ret / m;
			else
				ret = 0;
			current->size[ret] = -1;
		}
		if (current->next)
			current = current->next;
		else
			break ;
	}
}
