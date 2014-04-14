/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:22:10 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/17 14:23:18 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int					ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*pS1;
	unsigned char	*pS2;
	size_t			k;

	pS1 = (unsigned char *) s1;
	pS2 = (unsigned char *) s2;
	k = 0;
	while (k < len)
	{
		if (pS1[k] != pS2[k])
			return (pS1[k] - pS2[k]);
		k++;
	}
	return (0);
}
