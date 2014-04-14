/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:41:55 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/03 15:55:12 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list				*ft_lstnew(const void *content, size_t content_size)
{
	t_list			*new_link;
	void			*tmp;

	new_link = (t_list *) malloc(sizeof(*new_link));
	if (!new_link)
		return (NULL);
	if (content == NULL)
	{
		new_link->content = NULL;
		new_link->content_size = 0;
	}
	else
	{
		tmp = ft_memalloc(content_size);
		if (!tmp)
			return (NULL);
		new_link->content = ft_memcpy(tmp, content, content_size);
		new_link->content_size = content_size;
	}
	new_link->next = NULL;
	return (new_link);
}
