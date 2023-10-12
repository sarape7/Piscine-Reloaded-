# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sarperez <sarperez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 15:27:13 by sarperez          #+#    #+#              #
#    Updated: 2023/10/12 17:55:50 by sarperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CFLAGS = -Wall -Wextra -Werror

SRC_FILES  = ft_display_file.c ft_putstr.c

all: 
	gcc $(CFLAGS) $(SRC_FILES)
	
clean:
	@rm -f $(NAME)

fclean:	clean

re: fclean all
