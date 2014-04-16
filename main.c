/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:20:39 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/16 13:58:05 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int					main(void)
{
	char			*tab1;
	char			*tab2;
	char			*tab3;
	char			*tab4;
	char			*tab5;
	char			*tab6;
	char			*tab7;

	tab1 = malloc(10);
	tab2 = malloc(32);
	tab2 = malloc(32);
	tab3 = malloc(12);
	tab4 = malloc(5000);
	tab5 = malloc(32);
	tab6 = malloc(32);
	tab7 = malloc(6000);
	show_alloc_mem();
	free(tab5);
	free(tab4);
	tab7 = malloc(7000);
	show_alloc_mem();
	realloc(tab2, 45);
	realloc(tab1, 46);
	show_alloc_mem();
	return (0);
}
