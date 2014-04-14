/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 13:58:20 by jponcele          #+#    #+#             */
/*   Updated: 2013/12/25 13:03:18 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char		*new_str;
	size_t		new_index;

	new_str = NULL;
	if (str)
	{
		if (len > (ft_strlen(str) + 1 - start))
			return (ft_strdup(str));
		new_index = 0;
		new_str = ft_strnew(len + 1);
		if (new_str != NULL)
		{
			while (new_index < len)
			{
				new_str[new_index] = str[start++];
				new_index++;
			}
		}
		new_str[new_index] = '\0';
	}
	return (new_str);
}
