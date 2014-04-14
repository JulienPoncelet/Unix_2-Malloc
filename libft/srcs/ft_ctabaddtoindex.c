/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctabaddtoindex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 16:21:36 by jponcele          #+#    #+#             */
/*   Updated: 2014/03/21 17:37:15 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			**ft_ctabaddtoindex(char **ctab, char **to_add, int i, int j)
{
	int			len_ctab;
	int			len_to_add;
	char		**new_ctab;

	len_ctab = ft_ctablen(ctab);
	len_to_add = ft_ctablen(to_add);
	new_ctab = (char **)malloc(sizeof(char *) * (len_ctab + len_to_add + 1));
	while (j < i)
	{
		new_ctab[j] = ctab[j];
		j++;
	}
	while (to_add[j - i])
	{
		new_ctab[j] = to_add[j - i];
		j++;
	}
	while (j < len_ctab + len_to_add + 1)
	{
		new_ctab[j] = ctab[j - len_to_add];
		j++;
	}
	new_ctab[j] = NULL;
	return (new_ctab);
}
