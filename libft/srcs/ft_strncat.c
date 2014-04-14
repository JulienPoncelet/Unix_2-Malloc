/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:51:40 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 12:30:20 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_strncat(char *dst, const char *src, size_t len)
{
	size_t			index_dst;
	size_t			index_src;

	index_dst = 0;
	index_src = 0;
	while (dst[index_dst] != '\0')
		index_dst++;
	while (src[index_src] != '\0' && index_src < len)
		dst[index_dst++] = src[index_src++];
	dst[index_dst] = '\0';
	return (dst);
}
