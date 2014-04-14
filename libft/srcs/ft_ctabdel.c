/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctabdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 11:25:48 by jponcele          #+#    #+#             */
/*   Updated: 2014/03/21 17:37:21 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		**ft_ctabdel(char **tab, size_t i)
{
	char	**new_env;
	size_t	j;

	new_env = (char **)malloc(sizeof(char *) * ft_ctablen(tab));
	j = 0;
	while (j < i && tab[j])
	{
		new_env[j] = tab[j];
		j++;
	}
	while (tab[j + 1])
	{
		new_env[j] = tab[j + 1];
		j++;
	}
	new_env[j] = NULL;
	return (new_env);
}
