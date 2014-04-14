/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:51:06 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 12:31:08 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int				ft_strnequ(const char *str1, const char *str2, size_t len)
{
	size_t		index;

	index = 0;
	if (str1 == NULL || str2 == NULL)
	{
		if (str1 == str2)
			return (1);
		return (0);
	}
	while (str1[index] != '\0' && str2[index] != '\0' && index < len)
	{
		if (str1[index] != str2[index])
			return (0);
		index++;
	}
	if (str1[index] != str2[index] && index < len)
		return (0);
	return (1);
}
