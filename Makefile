# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: challeau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 18:08:08 by challeau          #+#    #+#              #
#    Updated: 2019/11/07 18:35:46 by challeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	$(wildcard ./*.c)

OBJS	=	${SRCS:.c=.o}

CFLAGS	=	-c -Wall -Wextra -Werror

all:		$(NAME)

.c.o:
		gcc ${CFLAGS} -I ./ -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
		ar rc $(NAME) ${OBJS} 

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f $(NAME)

re:		fclean all
