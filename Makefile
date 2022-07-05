# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 15:04:19 by ggentil           #+#    #+#              #
#    Updated: 2022/07/05 21:59:31 by ggentil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS	= push_swap.c check.c utils.c push.c rotate.c swap.c reverse_rotate.c \
			solve.c radix.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -Wall -Wextra -Werror -g #-fsanitize=address -fno-omit-frame-pointer

CC		= gcc

SRC_LIB	= ./ft_printf/libft

LIB		= ./ft_printf/libft/libft.a 

SRC_PRINTF	= ./ft_printf

PRINTF		= ./ft_printf/libftprintf.a

$(NAME):	start push_swap

start:
		$(MAKE) -C $(SRC_LIB)
		$(MAKE) -C $(SRC_PRINTF)

push_swap:
		$(CC) $(SRCS) $(LIB) $(PRINTF) $(CFLAGS) -o $(NAME)

clean:
		rm -rf $(OBJS)
		make clean -C $(SRC_LIB)
		make clean -C $(SRC_LIB)
		
fclean:	clean
		rm -rf $(NAME)
		make fclean -C $(SRC_LIB)
		make fclean -C $(SRC_PRINTF)

re:		fclean $(NAME)

.PHONY:	all clean fclean re 