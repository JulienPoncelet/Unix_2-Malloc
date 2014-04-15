/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:03:19 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 16:14:49 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

size_t			ft_strlen(char *str)
{
	size_t		index;

	index = 0;
	if (str)
	{
		while (str[index])
			index++;
	}
	return (index);
}
