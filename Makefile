# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: challeau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 18:08:08 by challeau          #+#    #+#              #
#    Updated: 2019/11/08 03:17:57 by challeau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c	\
		ft_bzero.c	\
		ft_calloc.c	\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c	\
		ft_memccpy.c	\
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_memcpy.c	\
		ft_memmove.c	\
		ft_memset.c	\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_split.c	\
		ft_strchr.c	\
		ft_strdup.c	\
		ft_strjoin.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c	\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnlen.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c	\
		ft_tolower.c	\
		ft_toupper.c

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
