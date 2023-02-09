/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:32:34 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/05 23:17:54 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	all_sorted(t_stacks *st)
{
	int	i;
	int	j;
	int	k;
	int	*cpy;

	i = st->a->top - 1;
	k = 0;
	j = 0;
	cpy = cpy_and_sort(st);
	while (i >= 0)
	{
		if (cpy[k] == st->a->arr[i])
			j++;
		k++;
		i--;
	}
	if (j == st->a->top)
		return (1);
	return (0);
}
