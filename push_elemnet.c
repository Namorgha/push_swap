/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elemnet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:07:01 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/12 22:12:24 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *st, int n)
{
	st->arr[st->top] = n;
	st->top++;
}

void	pop(t_stack *st)
{
	st->top--;
}

void	pa(t_stacks *st, int i)
{
	push(st->a, st->b->arr[st->b->top - 1]);
	pop(st->b);
	if (i == 1)
		write(1, "pa\n", 3);
}

void	pb(t_stacks *st, int i)
{
	push(st->b, st->a->arr[st->a->top - 1]);
	pop(st->a);
	if (i == 1)
		write(1, "pb\n", 3);
}
