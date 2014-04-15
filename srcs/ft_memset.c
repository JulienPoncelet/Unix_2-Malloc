/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:34:33 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 10:46:08 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void				*ft_memset(void *to_set, int value, size_t len)
{
	unsigned char	*p_to_set;
	size_t			k;

	p_to_set = (unsigned char*) to_set;
	k = 0;
	while (k < len)
		p_to_set[k++] = (unsigned char) value;
	return (to_set);
}
