/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_alloc_mem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 10:18:18 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 22:47:59 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

void					print_tiny(t_zone *current)
{
	int					i;
	char				*hexa = NULL;

	i = 0;
	while (i < MAX_ALLOC)
	{
		if (current->size[i] > 0)
		{
			ft_putaddress((unsigned long)&(current->data) + i * n, hexa);
			ft_putstr(" - ");
			ft_putaddress((unsigned long)&(current->data) + i * n + current->size[i] - 1, hexa);
			ft_putstr(" : ");
			ft_putnbr(current->size[i]);
			ft_putendl(" octets");
		}
		i++;
	}
}

void					print_small(t_zone *current)
{
	int					i;
	char				*hexa = NULL;

	i = 0;
	while (i < MAX_ALLOC)
	{
		if (current->size[i] > 0)
		{
			ft_putaddress((unsigned long)&(current->data) + i * m, hexa);
			ft_putstr(" - ");
			ft_putaddress((unsigned long)&(current->data) + i * m + current->size[i] - 1, hexa);
			ft_putstr(" : ");
			ft_putnbr(current->size[i]);
			ft_putendl(" octets");
		}
		i++;
	}
}

void					print_large(t_zone *current)
{
	char				*hexa = NULL;

	if (current->size[0] > 0)
	{
		ft_putaddress((unsigned long)&(current->data), hexa);
		ft_putstr(" - ");
		ft_putaddress((unsigned long)&(current->data)  + current->size[0] - 1, hexa);
		ft_putstr(" : ");
		ft_putnbr(current->size[0]);
		ft_putendl(" octets");
	}
}

void					print_view(t_zone *current)
{
	char				*hexa = NULL;

	if (current->type == TINY)
		ft_putstr("TINY : ");
	else if (current->type == SMALL)
		ft_putstr("SMALL : ");
	else
		ft_putstr("LARGE : ");
	ft_putaddress((unsigned long)current, hexa);
	ft_putchar('\n');
	if (current->type == TINY)
		print_tiny(current);
	else if (current->type == SMALL)
		print_small(current);
	else
		print_large(current);
}

void					show_alloc_mem(void)
{
	static t_zone		*ptr_view = NULL;
	t_zone				*current;

	if (!ptr_view)
		ptr_view = get_malloc();
	current = ptr_view;
	while (42)
	{
		if (current->index)
			print_view(current);
		if (current->next)
			current = current->next;
		else
			break ;
	}
}
