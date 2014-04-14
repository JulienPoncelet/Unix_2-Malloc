/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 10:56:58 by jponcele          #+#    #+#             */
/*   Updated: 2014/03/21 11:01:47 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <libft.h>

# define BUFF_SIZE 32

/*
**	get_next_line.c
*/

int			get_next_line(const int fd, char **line);
void		free_string(char *str);

#endif /* !GET_NEXT_LINE_H */
