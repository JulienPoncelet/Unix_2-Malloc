/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:54:02 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 12:28:21 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strcpy(char *dst, const char *src)
{
	size_t			index;

	index = 0;
	while (src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}
