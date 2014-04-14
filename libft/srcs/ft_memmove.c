/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:57:18 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 11:57:03 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	unsigned char		*p_src;
	unsigned char		*tmp;
	size_t				k;

	p_dst = (unsigned char *) dst;
	p_src = (unsigned char *) src;
	tmp = ft_memalloc(len * sizeof(*tmp));
	k = 0;
	while (k < len)
	{
		tmp[k] = p_src[k];
		k++;
	}
	k = 0;
	while (k < len)
	{
		p_dst[k] = tmp[k];
		k++;
	}
	free(tmp);
	return (dst);
}
