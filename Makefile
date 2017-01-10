#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tguillot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/29 20:50:24 by tguillot          #+#    #+#              #
#    Updated: 2016/01/31 22:12:39 by tguillot         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = game_2048

SRC = game.c\
		gamehandler.c\
		ft_addrpos.c\
        ft_checkloose.c\
        ft_checkwin.c\
        ft_down.c\
        ft_hasmoved.c\
        ft_left.c\
        ft_move.c\
        ft_random.c\
        ft_right.c\
        ft_tabinit.c\
        ft_test.c\
        ft_up.c\
		testu.c\
		testd.c\
		testl.c\
		testr.c\
		alltest.c\
		win.c\
		checkenum.c\

OBJ = game.o\
		gamehandler.o\
		ft_addrpos.o\
        ft_checkloose.o\
        ft_checkwin.o\
        ft_down.o\
        ft_hasmoved.o\
        ft_left.o\
        ft_move.o\
        ft_random.o\
        ft_right.o\
        ft_tabinit.o\
        ft_test.o\
		ft_up.o\
		testu.o\
		testd.o\
		testl.o\
		testr.o\
		alltest.o\
		win.o\
		checkenum.o\

HEADER = game.h\
		./libft/libft.h\

FINDLIBFT = -Llibft

LIBFTA = ./libft/libft.a

FLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ./libft/

all: $(NAME)

$(NAME):
	@clear
	@echo "\033[35;4mRule all!\033[0m"
	@make fclean -C $(LIBFT_DIR)
	@make -C $(LIBFT_DIR)
	@gcc $(FLAGS) -c $(SRC) $(HEADER)
	@gcc -lncurses -o $(NAME) $(OBJ) $(LIBFTA)

clean:
	@clear
	@echo "\033[35;4mRule clean!\033[0m"
	@rm -f $(OBJ)
	@rm -f game.h.gch
	@make clean -C $(LIBFT_DIR)

fclean: clean
	@clear
	@echo "\033[35;4mRule fclean!\033[0m"
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all
	@clear
	@echo "\033[35;4mRules fclean and all!\033[0m"

.PHONY: all, clean, fclean, re