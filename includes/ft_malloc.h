/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:24:32 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/20 17:07:24 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/mman.h>
# include <sys/resource.h>

# define PAGE getpagesize()

# define SMALL_N 32
# define SMALL_M 304

# define N (unsigned long long)1
# define M (unsigned long long)8

# define MAX_ALLOC 100

enum						e_type_zone
{
	TINY, SMALL, LARGE
};

typedef struct				s_zone
{
	int						type;
	int						index;
	rlim_t					total;
	size_t					size[MAX_ALLOC];
	size_t					tmp_size;
	struct s_zone			*next;
	void					*data;
}							t_zone;

/*
**							Ft_malloc.c
*/

void						*malloc(size_t size);

/*
**							Ft_free.c
*/

void						free(void *ptr);

/*
**							FT_realloc.c
*/

void						*realloc(void *ptr, size_t size);

/*
**							Get_malloc.c
*/

t_zone						*get_malloc(void);

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
**							Change_index.c
*/

int							change_index(t_zone *current);

/*
**							Found_inter.c
*/

int							found_inter(void *ptr, t_zone *current);

/*
**							Libft
*/

void						ft_putchar(char c);
void						ft_putstr(char *str);
void						ft_putendl(char *str);
void						ft_putnbr(size_t nbr);
void						ft_putnbrendl(int nbr);
void						ft_putaddress(void *ptr);
size_t						ft_strlen(char *str);
void						ft_bzero(void *to_set, size_t len);
void						*ft_memset(void *to_set, int value, size_t len);
void						*ft_memcpy(void *dst, const void *src, size_t len);

#endif
