/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:20:39 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 17:58:47 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int					main(void)
{
	char			*tab1;
	char			*tab2;
	char			*tab3;
	char			*tab4;

	tab1 = malloc(10);
	tab2 = malloc(32);
	tab3 = malloc(12);
	tab4 = malloc(5000);
	free(tab4);
	show_alloc_mem();
	return (0);
}
