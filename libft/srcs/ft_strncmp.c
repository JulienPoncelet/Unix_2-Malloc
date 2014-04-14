/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:03:55 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/17 15:30:36 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int					ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t			k;

	k = 0;
	if (len)
	{
		while (str1[k] != '\0' && k < len)
		{
			if (str1[k] != str2[k])
			{
				if (str1[k] < str2[k])
					return (-1);
				return (1);
			}
			k++;
		}
		k--;
		if (str1[k] != str2[k])
		{
			if (str1[k] < str2[k])
				return (-1);
			return (1);
		}
	}
	return (0);
}
