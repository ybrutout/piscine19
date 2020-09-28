# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybrutout <ybrutout@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 13:42:51 by ybrutout          #+#    #+#              #
#    Updated: 2020/09/28 15:47:15 by ybrutout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS		= 	$(addprefix srcs/, ${SRCS:.c=.o})

NAME		= 	libft.a

FLAGS		= 	-Wall -Wextra -Werror

CC			=	gcc

.c.o:
			${CC} ${FLAGS} -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs $@ $^

all:		${NAME}			

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re