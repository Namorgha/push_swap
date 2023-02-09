/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 00:26:41 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/07 22:47:22 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_sorted(t_stacks *st)
{
	int	i;
	int	j;
	int	*cpy;
	int	k;

	i = st->a->top - 1;
	j = 0;
	k = 0;
	cpy = cpy_and_sort(st);
	while (i >= 0)
	{
		if (cpy[k] == st->a->arr[i])
			j++;
		k++;
		i--;
	}
	if (j == st->a->top)
		exit(0);
	free(cpy);
}
