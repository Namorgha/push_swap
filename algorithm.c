/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 08:41:23 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/12 22:00:23 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	hell(t_stacks *st)
{
	if (st->a->top == 500)
		return (30);
	else
		return (15);
}

int	*cpy(t_stacks *st, int *y)
{
	int	i;
	int	stack_size;

	stack_size = st->a->top;
	i = 0;
	while (i < stack_size)
	{
		y[i] = st->a->arr[i];
		i++;
	}
	return (y);
}

int	*cpy_and_sort(t_stacks *st)
{
	int	stack_size;
	int	i;
	int	*y;
	int	j;
	int	tmp;

	stack_size = st->a->top;
	y = malloc(sizeof(int) * stack_size);
	cpy(st, y);
	i = 0;
	while (i++ < stack_size)
	{
		j = 0;
		while (j < stack_size)
		{
			if (j + 1 < stack_size && y[j] > y[j + 1])
			{
				tmp = y[j];
				y[j] = y[j + 1];
				y[j + 1] = tmp;
			}
			j++;
		}
	}
	return (y);
}
