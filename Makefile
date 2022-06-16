# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggentil <ggentil@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 15:04:19 by ggentil           #+#    #+#              #
#    Updated: 2022/06/16 15:23:34 by ggentil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS	= push_swap.c 

OBJS	= $(SRCS:.c=.o)

FLAGS	= -Wall -Wextra -Werror

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
		$(CC) $(SRCS) $(LIB) $(PRINTF) $(FLAGS) -o $(NAME)

clean:
		rm -rf $(OBJS)
		make clean -C $(SRC_LIB)
		make clean -C $(SRC_LIB)
		
flcean:	clean
		rm -rf $(NAME)
		make fclean -C $(SRC_LIB)
		make fclean -C $(SRC_PRINTF)

re:		fclean all

.PHONY:	all clean fclean re 