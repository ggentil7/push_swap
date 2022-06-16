# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 13:49:42 by ggentil           #+#    #+#              #
#    Updated: 2021/11/29 16:01:39 by ggentil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_print_utils.c ft_print_unsigned.c ft_print_hexa.c \

OBJS	= $(SRCS:.c=.o)

CC	= gcc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror

NAME	= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
			make -sC ./libft/
			cp ./libft/libft.a .
			mv libft.a libftprintf.a
			ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)
		make -sC ./libft/ clean


fclean:	clean                                 
		$(RM) $(NAME)
		make -sC ./libft/ fclean

re:		fclean $(NAME)

.PHONY:	all clean fclean re