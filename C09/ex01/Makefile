# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybrutout <ybrutout@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 13:42:51 by ybrutout          #+#    #+#              #
#    Updated: 2020/11/19 11:20:27 by ybrutout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a

SRCS		=	

OBJS		= 	$(addprefix srcs/, ${SRCS:.c=.o})

FLAGS		= 	-Wall -Wextra -Werror

CC			=	gcc

%.c %.o:
			${CC} ${FLAGS} -c -I./includes $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs $@ $^

all:		${NAME}			

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean r