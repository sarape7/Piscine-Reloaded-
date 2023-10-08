# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 15:27:13 by sarperez          #+#    #+#              #
#    Updated: 2023/10/06 16:56:29 by sarperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs/
INC_DIR = includes/

SRC_FILES  = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)

clean:
		@rm -f $(OBJECTS)

fclean:	clean
		@rm -f $(NAME)

re: fclean all