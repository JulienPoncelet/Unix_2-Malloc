/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:46:01 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 12:54:38 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void			ft_putnbr_fd(int nbr, int fd)
{
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd(nbr + '0', fd);
}
