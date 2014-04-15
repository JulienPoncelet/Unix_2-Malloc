/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 13:07:16 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 16:14:38 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void			ft_decimal_to_hexa(unsigned long nb, char *hex)
{
	int				i;
	int				j;
	char			tab[] = "0123456789abcdef";
	char			temp;

	j = 0;
	while (nb > 15)
	{
		i = nb % 16;
		hex[j] = tab[i];
		nb = nb / 16;
		j++;
	}
	hex[j] = tab[nb];
	hex[j + 1] = '\0';
	i = 0;
	while (i <= j)
	{
		temp = hex[j];
		hex[j] = hex[i];
		hex[i] = temp;
		i++;
		j--;
	}
}

void				ft_putaddress(void *ptr)
{
	unsigned long	a;
	char			str[20];

	a = (unsigned long) ptr;
	ft_decimal_to_hexa(a, str);
	write(1, "0x", 2);
	a = 0;
	while (str[a] != '\0')
	{
		write(1, str + a, 1);
		a++;
	}
}
