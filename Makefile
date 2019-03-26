# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afaddoul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/10 15:41:24 by afaddoul          #+#    #+#              #
#    Updated: 2018/12/11 16:09:20 by afaddoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = SRC/*.c

all : $(NAME)

$(NAME):
	@make -C libft
	@gcc $(SRC) libft/libft.a -o $(NAME)

clean :
	@make -C libft clean
	@rm -rf *.o

fclean : clean
	@make -C libft fclean
	@rm -rf $(NAME)

re : fclean all
