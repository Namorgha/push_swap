/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:57:46 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/08 00:37:47 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *st)
{
	int	temp;

	temp = st->arr[st->top - 1];
	st->arr[st->top - 1] = st->arr[st->top - 2];
	st->arr[st->top - 2] = temp;
}

void	sa(t_stacks *st, int i)
{
	swap(st->a);
	if (i == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stacks *st, int i)
{
	swap(st->b);
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stacks *st, int i)
{
	sa(st, i);
	sb(st, i);
}
