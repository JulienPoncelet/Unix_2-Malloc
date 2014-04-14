/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:26:01 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 12:27:04 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strcat(char *dst, const char *src)
{
	size_t			index_dst;
	size_t			index_src;

	index_dst = 0;
	index_src = 0;
	while (dst[index_dst] != '\0')
		index_dst++;
	while (src[index_src] != '\0')
		dst[index_dst++] = src[index_src++];
	dst[index_dst] = '\0';
	return (dst);
}
