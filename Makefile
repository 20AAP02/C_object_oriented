# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amaria-m <amaria-m@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 17:09:05 by amaria-m          #+#    #+#              #
#    Updated: 2022/06/29 11:47:08 by amaria-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= 	gcc -g
CFLAGS		= 	-Wall -Wextra -Werror
RM			= 	/bin/rm -f
NAME		= 	str_test

INCLUDES	= 	./HDR

SRCS		= 	$(shell find SRC/ -name '*.c')
OBJS		= 	$(SRCS:.c=.o)

.c.o:
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;32mOBJECT FILES COMPILED\033[0m"
	@$(CC) $(CFLAGS) -I$(INCLUDES) $(OBJS) -o $(NAME)
	@echo "\033[0;32mEXECUTABLE IS READY TO USE\033[0m"

clean:
	@$(RM) $(OBJS)
	@echo "\033[0;31mREMOVED OBJECT FILES\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;31mREMOVED EXECUTABLE\033[0m"

re: fclean all

norm :
	@norminette -R CheckForbiddenSourceHeader $(SRCS)

e:
	@make re && make clean && clear && ./$(NAME)

v:
	@make re && make clean && clear && valgrind ./$(NAME)

.PHONY: all re clean fclean m