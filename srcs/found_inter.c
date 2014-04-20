/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found_inter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 11:49:10 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/20 17:07:28 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

#include <stdio.h>

int							found_inter(void *ptr, t_zone *current)
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
		max = (unsigned long long)current + (current->size[0] / PAGE + 1) * PAGE;
	if (min <= check && check <= max)
		return ((int)(check - min));
	return (-1);
}
