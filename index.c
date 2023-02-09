/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:43:40 by namorgha          #+#    #+#             */
/*   Updated: 2023/01/22 03:18:54 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_idx_of(t_stack *st, int k)
{
	int	i;

	i = 0;
	while (i < st->top)
	{
		if (st->arr[i] == k)
			return (i);
		i++;
	}
	return (-1);
}

int	should_ra(t_stack *st, int k)
{
	int	idx;
	int	center;

	idx = get_idx_of(st, k);
	center = st->top / 2;
	if (idx >= center)
		return (1);
	return (0);
}
