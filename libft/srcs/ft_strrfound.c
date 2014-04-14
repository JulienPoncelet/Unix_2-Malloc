/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrfound.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/27 09:52:25 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/27 09:52:28 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int					ft_strrfound(const char *src, int value)
{
	size_t			index;
	int				res;

	index = 0;
	res = -1;
	while (src[index] != '\0')
	{
		if (src[index] == (char) value)
			res = index;
		index++;
	}
	return (res);
}
