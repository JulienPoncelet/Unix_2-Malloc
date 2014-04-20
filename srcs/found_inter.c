/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found_inter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 11:49:10 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/20 17:12:42 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

#include <stdio.h>

int							found_inter(void *ptr, t_zone *cur)
{
	unsigned long long		min;
	unsigned long long		max;
	unsigned long long		check;

	check = (unsigned long long)ptr;
	min = (unsigned long long)&(cur->data);
	if (cur->type == TINY)
		max = (unsigned long long)cur + N * PAGE;
	else if (cur->type == SMALL)
		max = (unsigned long long)cur + M * PAGE;
	else
		max = (unsigned long long)cur + (cur->size[0] / PAGE + 1) * PAGE;
	if (min <= check && check <= max)
		return ((int)(check - min));
	return (-1);
}
