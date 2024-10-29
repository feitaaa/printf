# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 22:09:02 by mcastrat          #+#    #+#              #
#    Updated: 2024/10/29 23:12:28 by mcastrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}
RM = rm -f
CC = gcc -Wall -Wextra -Werror
LIB = ar -rcs
SRCS =	''''''''''''''

%.o : %.c ft_print.h
	$(CC) -c $< -o $@
$(NAME): ${OBJS}
		${LIB} ${NAME} ${OBJS}
all:	${NAME}
clean:
		${RM} ${OBJS}
fclean:	clean
		${RM} ${NAME}
re:		fclean all

.PHONY: all clean fclean re