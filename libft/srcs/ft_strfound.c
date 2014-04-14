/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfound.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 11:58:49 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/25 12:02:24 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int					ft_strfound(const char *src, int value)
{
	int				index;

	if (!src)
		return (0);
	index = 0;
	while (src[index] != '\0')
	{
		if (src[index] == (char) value)
			return (index);
		index++;
	}
	if ((char) value == '\0')
		return (index);
	return (0);
}
