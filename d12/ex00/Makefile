# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmckinno <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 10:23:34 by tmckinno          #+#    #+#              #
#    Updated: 2016/08/25 15:11:17 by tmckinno         ###   ########.fr        #
#                                                                              #M
# **************************************************************************** #

-include make_srcs
NAME=ft_display_file
SRCDIR=srcs/
HEADDIR=./
CFLAGS=-Wall -Wextra -Werror -I$(HEADIR)


all: $(NAME) 

$(NAME): $(SRCS) 
	gcc -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
