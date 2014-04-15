# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 15:44:25 by jponcele          #+#    #+#              #
#    Updated: 2014/04/15 10:45:35 by jponcele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifeq ($(HOSTTYPE),)
		HOSTTYPE := $(shell uname -m)
endif

LS = libft_malloc_$(HOSTTYPE).so
NAME = libft_malloc.so

DIRSRC = ./srcs/
DIROBJ = ./obj/

SRC = ft_malloc.c\
	  show_alloc_mem.c\
	  adds.c

SRC += ft_putendl.c\
	   ft_putchar.c\
	   ft_putstr.c\
	   ft_strlen.c\
	   ft_bzero.c\
	   ft_memset.c

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
	@ln -s $(NAME) $(LS);
	@printf 'Creating symbolic link : [\033[32mDONE\033[0m]\n'

$(DIROBJ)%.o: $(DIRSRC)%.c
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $^ $(HEAD) -o $@

clean:
	@rm -rf obj
	@printf 'Clean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

fclean: clean
	@rm -rf $(NAME) $(LS)
	@printf 'Fclean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

re: fclean all

test: re
	@$(CC) $(CFLAGS) main.c -L ./ $(NAME) $(HEAD)
	@./a.out
	@rm -rf ./a.out ./a.out.dSYM/

.PHONY: all clean fclean re
