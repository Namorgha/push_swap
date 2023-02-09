/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:18:25 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/04 03:21:04 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ere(t_stacks *st)
{
	int	big;
	int	smal;

	smal = check_min(st->a);
	big = check_max(st->a);
	if (should_ra(st->a, smal))
		while (st->a->arr[st->a->top - 1] != smal)
			ra(st->a, 1);
	else
		while (st->a->arr[st->a->top - 1] != smal)
			rra(st->a, 1);
}

void	sort_3(t_stacks *st)
{
	int	big;
	int	smal;

	smal = check_min(st->a);
	big = check_max(st->a);
	if (st->a->arr[0] == big && st->a->arr[1] == smal)
		sa(st, 1);
	if (st->a->arr[st->a->top - 1] == big && st->a->arr[0] == smal)
		sa(st, 1);
	if (st->a->arr[st->a->top - 1] == big && st->a->arr[1] == smal)
		ra(st->a, 1);
	if (st->a->arr[st->a->top - 1] == smal && st->a->arr[1] == big)
		sa(st, 1);
	if (st->a->arr[0] == smal && st->a->arr[1] == big)
		rra(st->a, 1);
}

void	sort_5(t_stacks *st)
{
	int	i;
	int	smal;
	int	big;

	i = 5;
	while (i)
	{
		big = check_max(st->a);
		smal = check_min(st->a);
		while (st->a->top != 3)
		{
			smal = check_min(st->a);
			if (st->a->arr[st->a->top - 1] == smal)
				pb(st, 1);
			else
				ere(st);
		}
		sort_3(st);
		i--;
	}
}

void	return_it(t_stacks *st)
{
	sort_5(st);
	while (st->b->top)
		pa(st, 1);
}
