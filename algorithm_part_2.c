/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_part_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:22:27 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/07 17:34:54 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_idxx_of(int *arr, int k, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == k)
			return (i);
		i++;
	}
	return (-1);
}

void	pb_rb(t_stacks *st)
{
	pb(st, 1);
	rb(st->b, 1);
}

void	move_to_a(t_stacks *stacks)
{
	t_data	st;

	st.start = 0;
	st.stack_size = stacks->a->top;
	st.end = hell(stacks);
	st.sorted_ref = cpy_and_sort(stacks);
	while ((stacks->a->top - 1) >= 0)
	{
		st.top_idx = get_idxx_of (st.sorted_ref, \
				stacks->a->arr[stacks->a->top - 1], st.stack_size);
		if ((st.top_idx >= st.start && st.top_idx <= st.end) || \
				st.top_idx < st.start)
		{
			if (st.top_idx < st.start)
				pb_rb(stacks);
			else
				pb(stacks, 1);
			st.end++;
			st.start++;
		}
		else
			ra(stacks->a, 1);
	}
	free(st.sorted_ref);
}

void	sorting_all(t_stacks *st)
{
	int	max;

	duplicate(st);
	is_sorted(st);
	move_to_a(st);
	while (st->b->top)
	{
		max = check_max(st->b);
		if (st->b->arr[st->b->top - 1] == max)
			pa(st, 1);
		else
		{
			if (should_ra(st->b, max))
				while (st->b->arr[st->b->top - 1] != max)
					rb(st->b, 1);
			else
				while (st->b->arr[st->b->top - 1] != max)
					rrb(st->b, 1);
		}
	}
}

void	end(t_stacks *st)
{
	if (st->a->top == 5)
	{
		duplicate(st);
		is_sorted(st);
		return_it(st);
	}
	else if (st->a->top == 3)
	{
		duplicate(st);
		is_sorted(st);
		return_it(st);
	}
	else
		sorting_all(st);
}
