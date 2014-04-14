/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:43:40 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/01 11:57:48 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				ft_putendl_fd(const char *str, int fd)
{
	if (str)
	{
		ft_putstr_fd(str, fd);
		ft_putchar_fd('\n', fd);
	}
}
