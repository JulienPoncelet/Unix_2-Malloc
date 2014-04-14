/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deci_to_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 17:22:44 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/19 11:12:05 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				ft_deci_to_hexa(unsigned long nbr, char *hexa)
{
	int				i;
	int				j;
	char			tab[] = "0123456789abcdef";
	char			temp;

	j = 0;
	while (nbr > 15)
	{
		i = nbr % 16;
		hexa[j] = tab[i];
		nbr = nbr / 16;
		j++;
	}
	hexa[j] = tab[nbr];
	hexa[j + 1] = '\0';
	i = 0;
	while (i < j)
	{
		temp = hexa[j];
		hexa[j] = hexa[i];
		hexa[i] = temp;
		i++;
		j--;
	}
}

