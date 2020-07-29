# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junhokim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/24 19:47:48 by junhokim          #+#    #+#              #
#    Updated: 2020/07/24 19:47:51 by junhokim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c 
OBJS = ${SRCS:.c=.o}
INCS = includes
AR = ar -crv
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all
