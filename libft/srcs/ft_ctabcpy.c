/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctabcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 13:09:13 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/25 13:15:09 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				**ft_ctabcpy(char **dst, char **src)
{
	size_t			index;

	index = 0;
	while (src[index])
	{
		ft_strcpy(dst[index], src[index]);
		index++;
	}
	dst[index] = NULL;
	return (dst);
}
