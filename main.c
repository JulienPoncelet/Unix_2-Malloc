/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:20:39 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 22:57:16 by jponcele         ###   ########.fr       */
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
	tab3 = malloc(12);
	tab4 = malloc(5000);
	tab5 = malloc(32);
	tab6 = malloc(32);
	show_alloc_mem();
int i = 0;

	free(tab5);
while (i < 30)
	tab5[i++] = 'a';
	printf("%s\n", tab5);
	tab7 = malloc(42);
	show_alloc_mem();
	return (0);
}
