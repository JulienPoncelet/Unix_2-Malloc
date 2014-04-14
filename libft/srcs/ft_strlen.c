/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:03:19 by jponcele          #+#    #+#             */
/*   Updated: 2014/01/21 17:14:33 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t			ft_strlen(const char *str)
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
