/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctablen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/22 10:10:56 by jponcele          #+#    #+#             */
/*   Updated: 2014/03/22 10:10:58 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t				ft_ctablen(char **ctab)
{
	size_t			index;

	index = 0;
	if (ctab)
	{
		while (ctab[index])
			index++;
	}
	return (index);
}
