/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deci_to_octal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 10:06:11 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/19 11:19:22 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				ft_deci_to_octal(unsigned int nbr, char *octal)
{
	int				i;
	int				j;
	char			tab[] = "01234567";
	char			temp;

	j = 0;
	while (nbr > 8)
	{
		i = nbr % 8;
		octal[j] = tab[i];
		j++;
		nbr = nbr / 8;
	}
	octal[j] = tab[nbr];
	octal[j + 1] = '\0';
	i = 0;
	while (i < j)
	{
		temp = octal[j];
		octal[j] = octal[i];
		octal[i] = temp;
		i++;
		j--;
	}
}
