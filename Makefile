# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/26 11:56:18 by tmasethe          #+#    #+#              #
#    Updated: 2018/08/26 12:37:36 by tmasethe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CHECKER	=	checker

NAME_PUSH_SWAP	=	push_swap

FILES_CHECKER	=	checker.c

FILES_PUSH_SWAP =	push.c swap.c sort_stack.c main.c get_numbers.c rotate.c

OBJ_CHECKER		=	$(FILES_CHECKER:.c=.o)

OBJ_PUSH_SWAP	=	$(FILES_PUSH_SWAP:.c=.o)

LDFLAGS			=	-L./libft/

LFT				=	-lft

CC				=	gcc $(CFLAGS)

CFLAGS			=	-Wall -Wextra -Werror

all: $(NAME_CHECKER)

all: $(NAME_PUSH_SWAP)

$(NAME_CHECKER): $(OBJ_CHECKER)
	@make -C ./libft/
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ_CHECKER) -o $@

$(NAME_PUSH_SWAP):	$(OBJ_PUSH_SWAP)
	@make -C ./libft/
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ_PUSH_SWAP) -o $@

clean:	cleanlib
	@rm -f $(OBJ_CHECKER)
	@rm -f $(OBJ_PUSH_SWAP)

cleanlib:
	@make clean -C ./libft/

fclean:	clean fcleanlib
	@rm -f $(NAME_CHECKER)
	@rm -f $(NAME_PUSH_SWAP)

fcleanlib:
	@make fclean -C ./libft/

re : fclean all

norme:
	norminette $(FILES_CHECKER)
	norminette $(FILES_PUSH_SWAP)
	norminette filler.h

.PHONY : all clean fclean re


