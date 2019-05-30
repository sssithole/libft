# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssithole <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 08:56:02 by ssithole          #+#    #+#              #
#    Updated: 2019/05/30 14:02:13 by ssithole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SOURCES = ft_memset.c ft_memcpy.c ft_bzero.c \
		  ft_isalnum.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c

OBJECTS = ft_memset.o ft_memcpy.o ft_bzero.o \
		  ft_isalnum.o ft_isascii.o ft_isdigit.o ft_islower.o ft_isprint.o

flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -c $(SOURCES) $(flags)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

c:
	gcc $(flags) main.c libft.a

N:
	norminette  -R CheckForbiddenSourceHeader $(SOURCES)
