/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:41:59 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/23 18:04:16 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void				ft_putstr_fd(const char *str, int fd)
{
	if (str)
		write(fd, str, ft_strlen(str));
	else
		write(fd, "(null)", 6);
}
