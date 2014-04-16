/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/16 13:21:50 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/16 13:37:31 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void						ft_putaddress(void *ptr)
{
	unsigned long long		llu_ptr;
	static char				hexa_tab[] = "0123456789abcdef";
	static char				hexa[10];
	int						i;

	llu_ptr = (unsigned long long)ptr;
	ft_bzero(hexa, 10);
	i = 8;
	while (llu_ptr)
	{
		hexa[i] = hexa_tab[llu_ptr % 16];
		llu_ptr = llu_ptr / 16;
		i--;
	}
	ft_putstr("0x");
	ft_putstr(hexa);
}
