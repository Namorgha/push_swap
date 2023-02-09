# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 00:04:10 by namorgha          #+#    #+#              #
#    Updated: 2023/02/08 00:34:11 by namorgha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBFT         = libft/libft.a

GSRC = check.c dup.c index.c algorithm.c check_sorting.c push_elemnet.c push_swap.c rra_rrb.c ra_rb.c rotate.c sa_sb_ss.c main.c is_sorted.c sorting_5.c algorithm_part_2.c rev_sort.c

BSRC = check.c dup.c index.c algorithm.c push_elemnet.c check_sorting.c checker_main.c ra_rb.c rra_rrb.c rotate.c sa_sb_ss.c checker.c push_swap.c is_sorted.c sorting_5.c algorithm_part_2.c rev_sort.c

all: push_swap

bonus: checker

push_swap: $(GSRC) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(GSRC) $(LIBFT)

checker: $(BSRC) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(BSRC) $(LIBFT)

$(LIBFT):
		make -C libft/

clean:
	rm -f */*.o

fclean: clean
	rm -f */*.a
	rm -f push_swap
	rm -f checker

re: fclean all
