/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:40:42 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/03 12:14:43 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strnew(size_t size)
{
	char		*str;
	size_t		index;

	if (!size)
		return (NULL);
	index = 0;
	str = (char *) malloc(sizeof(*str) * (size + 1));
	if (str != NULL)
	{
		while (index < size)
		{
			str[index] = '\0';
			index++;
		}
		str[index] = '\0';
	}
	return (str);
}
