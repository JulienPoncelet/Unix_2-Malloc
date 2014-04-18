/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_alloc_mem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 10:18:18 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/18 14:48:58 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

void					print_tiny(t_zone *cur)
{
	int					i;

	i = 0;
	while (i < MAX_ALLOC)
	{
		if (cur->size[i] > 0)
		{
			ft_putaddress(&(cur->data) + i * SMALL_N / 8);
			ft_putstr(" - ");
			ft_putaddress(&(cur->data) + (i + 1) * SMALL_N / 8);
			ft_putstr(" : ");
			ft_putnbr(cur->size[i]);
			ft_putendl(" octets");
		}
		i++;
	}
}

void					print_small(t_zone *cur)
{
	int					i;

	i = 0;
	while (i < MAX_ALLOC)
	{
		if (cur->size[i] > 0)
		{
			ft_putaddress(&(cur->data) + i * SMALL_M / 8);
			ft_putstr(" - ");
			ft_putaddress(&(cur->data) + (i + 1) * SMALL_M / 8);
			ft_putstr(" : ");
			ft_putnbr(cur->size[i]);
			ft_putendl(" octets");
		}
		i++;
	}
}

void					print_large(t_zone *current)
{
	if (current->size[0] > 0)
	{
		ft_putaddress(&(current->data));
		ft_putstr(" - ");
		ft_putaddress(&(current->data) + current->size[0] / 8);
		ft_putstr(" : ");
		ft_putnbr(current->size[0]);
		ft_putendl(" octets");
	}
}

void					print_view(t_zone *current)
{
	if (current->type == TINY)
		ft_putstr("TINY : ");
	else if (current->type == SMALL)
		ft_putstr("SMALL : ");
	else
		ft_putstr("LARGE : ");
	ft_putaddress(current);
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
	ft_putstr("Total : ");
	ft_putnbr(ptr_view->total);
	ft_putendl(" octets");
}
