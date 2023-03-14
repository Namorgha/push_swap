# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 00:04:10 by namorgha          #+#    #+#              #
#    Updated: 2023/02/13 00:03:21 by namorgha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT         = libft/libft.a

GSRC = check.c dup.c index.c algorithm.c check_sorting.c push_elemnet.c push_swap.c rra_rrb.c ra_rb.c rotate.c sa_sb_ss.c main.c is_sorted.c sorting_5.c algorithm_part_2.c rev_sort.c sort_2.c

BSRC = check.c dup.c index.c algorithm.c push_elemnet.c check_sorting.c checker_main.c ra_rb.c rra_rrb.c rotate.c sa_sb_ss.c checker.c push_swap.c is_sorted.c sorting_5.c algorithm_part_2.c rev_sort.c sort_2.c

GSRO = check.o dup.o index.o algorithm.o check_sorting.o push_elemnet.o push_swap.o rra_rrb.o ra_rb.o rotate.o sa_sb_ss.o main.o is_sorted.o sorting_5.o algorithm_part_2.o rev_sort.o sort_2.o

BSRO = check.o dup.o index.o algorithm.o push_elemnet.o check_sorting.o checker_main.o ra_rb.o rra_rrb.o rotate.o sa_sb_ss.o checker.o push_swap.o is_sorted.o sorting_5.o algorithm_part_2.o rev_sort.o sort_2.o

all: $(NAME)

bonus: checker

$(NAME): $(GSRC) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(GSRC) $(LIBFT)

checker: $(BSRC) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(BSRC) $(LIBFT)

$(LIBFT):
		make -C libft

clean:
	rm -f $(GSRO) $(BSRO)
	make -C libft clean

fclean: clean
	make -C libft fclean
	rm -f push_swap
	rm -f checker

re: fclean all
