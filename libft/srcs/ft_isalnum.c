/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:40:15 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 11:52:34 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int				ft_isalnum(int value)
{
	if (ft_isdigit(value) == 1 || ft_isalpha(value) == 1)
		return (1);
	return (0);
}
