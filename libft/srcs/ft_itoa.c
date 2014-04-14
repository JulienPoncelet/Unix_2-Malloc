/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 14:12:32 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/17 14:45:55 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t		get_len(long int nbr)
{
	size_t			len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = nbr * -1;
	}
	else if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static void			fill_str(char *str, size_t *p_index, long int nbr)
{
	if (nbr < 0)
	{
		str[*p_index] = '-';
		*p_index = *p_index + 1;
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		fill_str(str, p_index, nbr / 10);
		fill_str(str, p_index, nbr % 10);
	}
	else
	{
		str[*p_index] = '0' + nbr;
		*p_index = *p_index + 1;
	}
}

char				*ft_itoa(int nbr)
{
	char			*str;
	size_t			index;
	long			long_nbr;

	long_nbr = (long)nbr;
	str = ft_strnew(get_len(long_nbr) + 1);
	index = 0;
	fill_str(str, &index, long_nbr);
	return (str);
}
