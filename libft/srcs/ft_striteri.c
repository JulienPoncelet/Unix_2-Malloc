/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:57:59 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/02 13:01:02 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (str && f)
	{
		index = 0;
		while (str[0] != '\0')
		{
			(*f)(index, str);
			str++;
			index++;
		}
	}
}
