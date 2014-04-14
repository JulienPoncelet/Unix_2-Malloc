/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:57:01 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/25 10:23:03 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strchr(const char *src, int value)
{
	size_t			index;

	if (!src)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		if (src[index] == (char) value)
			return ((char *) &src[index]);
		index++;
	}
	if ((char) value == '\0')
		return ((char *) &src[index]);
	return (NULL);
}
