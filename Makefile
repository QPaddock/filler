# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qpaddock <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/13 10:03:54 by qpaddock          #+#    #+#              #
#    Updated: 2018/08/15 11:37:58 by qpaddock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

SOURCE = filler.c store_map.c store_token.c position.c move_2.c try_move.c \
		 make_move.c heat_map.c make_heat.c

OUT = filler.o store_map.o store_token.o position.o move_2.o try_move.o \
	  make_move.o heat_map.o make_heat.o

all	:
	make -C libft/ fclean && make -C libft/
	gcc $(FLAGS) -I libft/includes -c $(SOURCE)
	gcc -o filler $(OUT) -I libft/includes -L libft/ -lft

clean :
	rm -rf $(OUT)
	make -C libft/ clean

fclean : clean
	rm -rf filler
	make -C libft/ fclean

re : fclean all
