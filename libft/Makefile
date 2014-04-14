# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 15:44:25 by jponcele          #+#    #+#              #
#    Updated: 2014/03/21 11:00:38 by jponcele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DIRSRC = ./srcs/
DIROBJ = ./obj/

SRC = ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_strlen.c\
	  ft_strdup.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strlcat.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strrfound.c\
	  ft_strstr.c\
	  ft_strfstr.c\
	  ft_strnstr.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_memalloc.c\
	  ft_memdel.c\
	  ft_strnew.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_strsub.c\
	  ft_strsplit.c\
	  ft_strfound.c\
	  ft_itoa.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_putendl.c\
	  ft_putnbr.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_lstnew.c\
	  ft_lstdelone.c\
	  ft_lstdel.c\
	  ft_lstadd.c\
	  ft_lstiter.c\
	  ft_putnbrendl.c\
	  ft_lstaddend.c\
	  ft_memjoin.c\
	  free_string.c\
	  get_next_line.c\
	  ft_ctablen.c\
	  ft_getnbr.c\
	  ft_absolute.c\
	  ft_ctabdup.c\
	  ft_ctabdel.c\
	  ft_ctabcpy.c\
	  ft_ctabsub.c\
	  ft_ctabjoin.c\
	  ft_ctabaddtoindex.c\
	  ft_getopt.c

OBJ = $(SRC:.c=.o)

DIROBJS = $(addprefix $(DIROBJ), $(OBJ))

CC = clang
CFLAGS = -Wall -Werror -Wextra -O3 -g

AR = ar
ARFLAGS = -rc

HEAD = -I ./includes/

all: $(NAME)

$(NAME): $(DIROBJS)
	@printf 'Compiling %s binaries : [\033[32mDONE\033[0m]\n' '$(NAME)'
	@$(AR) $(ARFLAGS) $(NAME) $^
	@ranlib $(NAME)
	@printf 'Compiling %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

$(DIROBJ)%.o: $(DIRSRC)%.c
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $^ $(HEAD) -o $@

clean:
	@rm -rf obj
	@printf 'Clean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

fclean: clean
	@rm -rf $(NAME)
	@printf 'Fclean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

re: fclean all

.PHONY: all clean fclean re
