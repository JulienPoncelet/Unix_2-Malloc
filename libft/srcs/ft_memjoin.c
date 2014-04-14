/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 14:50:21 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/22 13:08:13 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memjoin(const void *s1, const void *s2, size_t l1, size_t l2)
{
	char	*new;
	size_t	i1;
	size_t	i2;
	char	*p_src1;
	char	*p_src2;

	p_src1 = (char *) s1;
	p_src2 = (char *) s2;
	new = (void *) ft_memalloc(sizeof(*new) * (l1 + l2 + 1));
	i1 = 0;
	while (i1 < l1)
	{
		new[i1] = p_src1[i1];
		i1++;
	}
	i2 = 0;
	while (i2 < l2)
		new[i1++] = p_src2[i2++];
	new[i1] = '\0';
	return (new);
}
