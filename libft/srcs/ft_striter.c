/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:20:18 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 12:28:55 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_striter(char *str, void (*f)(char *))
{
	size_t		index;

	if (str && f)
	{
		index = 0;
		while (str[index] != '\0')
		{
			(*f)(str + index);
			index++;
		}
	}
}
