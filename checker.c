/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:05:27 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/09 16:46:56 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checker_cmp2(t_stacks *st, char *str)
{
	if (ft_strcmp(str, "rr\n"))
		rr(st, 0);
	else if (ft_strcmp(str, "rrr\n"))
		rrr(st, 0);
	else if (ft_strcmp(str, "sa\n"))
		sa(st, 0);
	else if (ft_strcmp(str, "sb\n"))
		sb(st, 0);
	else if (ft_strcmp(str, "ss\n"))
		ss(st, 0);
	else if (ft_strcmp(str, "pa\n"))
		pa(st, 0);
	else if (ft_strcmp(str, "pb\n"))
		pb(st, 0);
	else
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	checker_cmp(t_stacks *st, char *str)
{
	if (ft_strcmp(str, "ra\n"))
		ra(st->a, 0);
	else if (ft_strcmp(str, "rra\n"))
		rra(st->a, 0);
	else if (ft_strcmp(str, "rb\n"))
		rb(st->b, 0);
	else if (ft_strcmp(str, "rrb\n"))
		rrb(st->b, 0);
	else
		checker_cmp2(st, str);
}

void	check_input(t_stacks *st, int fd)
{
	char	*ptr;

	ptr = get_next_line(fd);
	while (ptr != NULL)
	{
		checker_cmp(st, ptr);
		free(ptr);
		ptr = get_next_line(fd);
	}
	if (all_sorted(st) && st->b->top == 0)
		write(1, "OK\n", 3);
	else
		write(1,"KO\n", 3);
}
