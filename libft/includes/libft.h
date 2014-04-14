/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:49:51 by jponcele          #+#    #+#             */
/*   Updated: 2014/02/11 13:55:32 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void		*ft_memset(void *to_set, int value, size_t len);
void		ft_bzero(void *to_set, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t len);
void		*ft_memccpy(void *dst, const void *src, int c, size_t len);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *src, int value, size_t len);
int			ft_memcmp(const void *str1, const void *str2, size_t len);

size_t		ft_strlen(const char *str);
char		*ft_strdup(const char *src);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcat(char *dst, const char *src);
char		*ft_strncat(char *dst, const char *src, size_t len);
size_t		ft_strlcat(char *dst, const char *src, size_t len);
char		*ft_strchr(const char *src, int value);
char		*ft_strrchr(const char *src, int value);
int			ft_strrfound(const char *src, int value);
char		*ft_strstr(const char *str1, const char *str2);
int			ft_strfstr(const char *str1, const char *str2);
char		*ft_strnstr(const char *str1, const char *str2, size_t len);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *str1, const char *str2, size_t len);
int			ft_strfound(const char *src, int value);

int			ft_atoi(const char *str);
int			ft_getnbr(char *str);
char		*ft_itoa(int nbr);
int			ft_isalpha(int value);
int			ft_isdigit(int value);
int			ft_isalnum(int value);
int			ft_isascii(int value);
int			ft_isprint(int value);
int			ft_toupper(int value);
int			ft_tolower(int value);

void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *str);
void		ft_striter(char *str, void (*f)(char *));
void		ft_striteri(char *str, void (*f)(unsigned int, char *));
char		*ft_strmap(const char *str, char (*f)(char));
char		*ft_strmapi(const char *str, char (*f)(unsigned int, char));
int			ft_strequ(const char *str1, const char *str2);
int			ft_strnequ(const char *str1, const char *str2, size_t len);
char		*ft_strsub(const char *str, unsigned int start, size_t len);
char		*ft_strjoin(const char *str1, const char *str2);
char		*ft_strtrim(const char *str);
char		**ft_strsplit(const char *str, char *values);

void		ft_putchar(char c);
void		ft_putstr(const char *str);
void		ft_putendl(const char *str);
void		ft_putnbr(int nbr);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(const char *str, int fd);
void		ft_putendl_fd(const char *str, int fd);
void		ft_putnbr_fd(int nbr, int fd);

t_list		*ft_lstnew(const void *content, size_t content_size);
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstadd(t_list **alst, t_list *new_link);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void		ft_putnbrendl(int nbr);
void		ft_lstaddend(t_list **alst, t_list *new_elem);
void		*ft_memjoin(const void *src1, const void *src2, \
		size_t len1, size_t len2);

size_t		ft_ctablen(char **ctab);
int			ft_absolute(int nbr);
char		**ft_ctabdup(char **ctab);
char		**ft_ctabdel(char **ctab, size_t i);
char		**ft_ctabcpy(char **dst, char **src);
char		**ft_ctabsub(char **ctab, int start, size_t len);
char		**ft_ctabjoin(char **ctab1, char **ctab2);
char		**ft_ctabaddtoindex(char **ctab, char **to_add, int i, int j);
int			ft_getopt(char **cmd, char **tab, char *valid_opt, char *error);

#endif /* !LIBFT_H */
