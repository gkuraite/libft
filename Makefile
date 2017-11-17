# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkuraite <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 08:57:04 by gkuraite          #+#    #+#              #
#    Updated: 2017/11/17 10:04:11 by gkuraite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

HDR = libft.h

all: $(NAME)

$(NAME): $(HDR)
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
