/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 18:34:50 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/25 19:11:27 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int					ft_strfstr(const char *str1, const char *str2)
{
	size_t			i;
	size_t			j;
	size_t			i_tmp;

	if (!str2 || ft_strlen(str2) == 0)
		return (0);
	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		i_tmp = i;
		while (str1[i] == str2[j] && str1[i] != '\0' && str2[j] != '\0')
		{
			i++;
			j++;
		}
		if (str2[j] == '\0')
			return (i_tmp);
		i = i_tmp + 1;
		j = 0;
	}
	return (0);
}
