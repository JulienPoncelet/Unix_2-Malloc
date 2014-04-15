/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:24:32 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 12:22:23 by jponcele         ###   ########.fr       */
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

# define n 32
# define m 304

# define N (unsigned long long)1
# define M (unsigned long long)8

# define MAX_ALLOC 100

enum						e_type_zone
{
	TINY, SMALL , LARGE
};

typedef struct				s_zone
{
	int						type;
	int						index;
	void					*tab[100];
	int						free[100];
	struct s_zone			*next;
}							t_zone;

/*
**							Ft_malloc.c
*/

void						*ft_malloc(size_t size);

/*
**							Adds.c
*/

void						*add_tiny(t_zone *ptr_malloc, size_t size);
void						*add_small(t_zone *ptr_malloc, size_t size);
void						*add_large(t_zone *ptr_malloc, size_t size);

/*
**							Show_alloc_mem.c
*/

void						show_alloc_mem(void);

/*
**							Libft
*/

void						ft_putchar(char c);
void						ft_putstr(char *str);
void						ft_putendl(char *str);
size_t						ft_strlen(char *str);
void						ft_bzero(void *to_set, size_t len);
void						*ft_memset(void *to_set, int value, size_t len);

#endif
