/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:24:32 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/14 17:39:30 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

#include <stdio.h>

# include <stdlib.h>
# include <unistd.h>
# include <sys/mman.h>
# include <sys/resource.h>

# define PAGE getpagesize()
# define TINY 1
# define SMALL 8

typedef struct				s_tiny
{
	int						taux;
	void					*page;
	struct s_tiny			*next;
}							t_tiny;

typedef struct				s_small
{
	int						taux;
	void					*page;
	struct s_small			*next;
}							t_small;

/*
**							Ft_malloc.c
*/

void						*ft_malloc(size_t size);

/*
**							Init_malloc.c
*/


/*
**							Libft
*/

void						ft_putchar(char c);
void						ft_putstr(char *str);
void						ft_putendl(char *str);
size_t						ft_strlen(char *str);

#endif
