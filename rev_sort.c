/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 00:26:41 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/04 12:38:08 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rev_sort(t_stacks *st)
{
	int	i;
	int	j;
	int	*cpy;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	cpy = cpy_and_sort(st);
	if (st->a->top >= 100)
	{
		while (i != st->a->top)
		{
			if (cpy[k] == st->a->arr[i])
				j++;
			k++;
			i++;
		}
	}
	free(cpy);
	if (j == st->a->top)
		return (1);
	return (0);
}

void	reverse_algo(t_stacks *st)
{
	if (rev_sort(st))
	{
		while (st->a->top)
		{
			rra(st->a, 1);
			pb(st, 1);
		}
	}
	else
		end(st);
}

void	finish_the_revsort(t_stacks *st)
{
	reverse_algo(st);
	while (st->b->top)
		pa(st, 1);
}
