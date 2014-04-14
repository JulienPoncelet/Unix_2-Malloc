/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:37:00 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 11:56:05 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	size_t			k;

	p_dst = (unsigned char*) dst;
	p_src = (unsigned char*) src;
	k = 0;
	while (k < len)
	{
		if ((*p_dst++ = *p_src++) == c)
			return (p_dst);
		k++;
	}
	return (NULL);
}
