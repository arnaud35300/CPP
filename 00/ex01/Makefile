# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arguilla <arguilla@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 17:25:51 by arguilla          #+#    #+#              #
#    Updated: 2022/01/24 18:38:57 by arguilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# [ VARIABLES ] #

SHELL	=	/bin/sh
NAME	=	phonebook
RM		=	/bin/rm -rf
MAKE	=	make

# [ COLORS ] #

_END	=	\e[0m
_RED	=	\e[31m
_GREEN	=	\e[32m
_YELLOW	=	\e[33m

# [ COMPILATION VARIABLES ] #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

# [ DIRECTORIES ] #

O		=	objs/
I		=	-I./includes

# [ SOURCES ] #

SRCS	=	main.cpp \

# [ OBJECTS ] #

OBJS	=	$(SRCS:%=$O%.o)

# [ VPATH ] #

VPATH	=	srcs:includes

# [ RULES ] #

all:		$(NAME)

$(NAME):	$(OBJS)
			@printf "\033[2K\r$(_GREEN) All files compiled into '$O'. $(_END)✅\n"
			@$(CC) $(CFLAGS) $^ -o $@ $I
			@printf "$(_GREEN) Binary '$(NAME)' created. $(_END)✅\n"

$O:
			@mkdir -p $@

$O%.o:	%	| $O
			@printf "\033[2K\r $(_YELLOW)Compiling $< $(_END)⌛"
			@$(CC) $(CFLAGS) $I -c $< -o $@

clean:
			@$(RM) $O
			@printf "$(_RED) '$O' has been deleted. $(_END)🗑️\n"

fclean:		clean
			@$(RM) $(NAME)
			@printf "$(_RED) '$(NAME)' has been deleted. $(_END)🗑️\n"

re:			fclean all

# [ PHONY ] #

.PHONY:	all clean fclean re
