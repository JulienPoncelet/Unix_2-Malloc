/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:20:39 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/19 18:22:22 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int					main(void)
{
	char			*tab1 = NULL;
	int				i = 0;

	show_alloc_mem();
	free(tab1);
	tab1 = malloc(10);
	show_alloc_mem();
	while (i < 10)
		tab1[i++] = '2';
	tab1 = realloc(tab1, 42);
	show_alloc_mem();
	ft_putendl(tab1);
	return (0);
}
