/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgedon <vgedon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/14 10:20:24 by vgedon            #+#    #+#             */
/*   Updated: 2014/03/21 17:33:58 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <unistd.h>
#include <get_next_line.h>

int					ft_get_end_line(char *buff)
{
	int				i;

	i = 0;
	while (buff[i] != '\n' && buff[i])
		i++;
	return (i);
}

void				ft_swing_buff(char *buff, int len)
{
	int				i;

	i = 0;
	while (len < BUFF_SIZE)
	{
		buff[i] = buff[len];
		i++;
		len++;
	}
	while (i < BUFF_SIZE)
	{
		buff[i] = 0;
		i++;
	}
}

int					ft_read_buff(int ret, char *buff, char **line, int *end)
{
	char			*tmp;

	ret = ft_get_end_line(buff);
	if (buff[ret] == '\n' || !ret)
		*end = 1;
	tmp = ft_strnew(ft_strlen(*line) + ret);
	if (ft_strlen(*line))
		tmp = ft_strcpy(tmp, *line);
	ft_strncpy(tmp + ft_strlen(*line), buff, ret);
	free_string(*line);
	*line = tmp;
	ft_swing_buff(buff, ret + 1);
	return (ret);
}

int					ft_get_line(int fd, char *buff, char **line)
{
	int				ret;
	int				end_line;

	end_line = 0;
	while (!end_line)
	{
		if (*buff)
			ret = ft_read_buff(ret, buff, line, &end_line);
		else
		{
			ret = read(fd, buff, BUFF_SIZE);
			if (ret <= 0)
				return (ret);
		}
	}
	return (end_line);
}

int					get_next_line(int fd, char **line)
{
	int				ret;
	static char		*buff = NULL;

	*line = NULL;
	if (buff == NULL)
		buff = ft_strnew(BUFF_SIZE);
	ret = ft_get_line(fd, buff, line);
	return (ret);
}
