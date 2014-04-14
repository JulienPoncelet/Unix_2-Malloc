/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctabdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/23 14:11:44 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/25 14:04:29 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		**ft_ctabdup(char **ctab)
{
	char	**dup;
	int		i;

	if (!ctab)
		return (NULL);
	dup = (char**)malloc(sizeof(char *) * (ft_ctablen(ctab) + 1));
	i = 0;
	while (ctab[i])
	{
		dup[i] = ctab[i];
		i++;
	}
	dup[i] = NULL;
	return (dup);
}
