# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 15:27:13 by sarperez          #+#    #+#              #
#    Updated: 2023/10/12 12:43:32 by sarperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRC_DIR = srcs/
INC_DIR = includes/

SRC_FILES  = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJECTS = $(addprefix $(SRC_DIR), $(SRC_FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)

clean:
		@rm -f $(OBJECTS)

fclean:	clean
		@rm -f $(NAME)

re: fclean all
