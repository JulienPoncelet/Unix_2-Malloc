/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:04:46 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/19 18:20:02 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void				*ft_memcpy(void *dst, const void *src, size_t len)
{
	char			*p_dst;
	char			*p_src;
	size_t			k;

	if (!dst || !src || !len)
		return (dst);
	p_dst = (char*)dst;
	p_src = (char*)src;
	k = 0;
	while (k < len)
	{
		p_dst[k] = p_src[k];
		k++;
	}
	return (dst);
}
