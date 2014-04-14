/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:10:48 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 11:56:16 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				*ft_memchr(const void *src, int value, size_t len)
{
	unsigned char	*p_src;
	size_t			k;
	char			end;

	p_src = (unsigned char *) src;
	k = 0;
	end = '0';
	while (k < len && end == '0')
	{
		if (p_src[k++] == (unsigned char) value)
			end = '1';
	}
	if (end == '0')
		return (NULL);
	return (p_src + k - 1);
}
