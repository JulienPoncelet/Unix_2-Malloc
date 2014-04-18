/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 14:16:45 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/18 10:57:10 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int							change_index(t_zone *current)
{
	int						i;

	i = 0;
	while (i < MAX_ALLOC)
	{
		if (current->size[i] == 0)
			return (i);
		i++;
	}
	return (i);
}
