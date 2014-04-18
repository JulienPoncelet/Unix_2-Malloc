/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:20:39 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/18 14:46:21 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int					main(void)
{
	char			*tab1 = NULL;
	struct rlimit	rlp;

	show_alloc_mem();
	free(tab1);
	getrlimit(RLIMIT_STACK, &rlp);
	printf("%llu\n", rlp.rlim_cur);
	show_alloc_mem();
	return (0);
}
