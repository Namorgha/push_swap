/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:55:01 by namorgha          #+#    #+#             */
/*   Updated: 2023/01/27 19:13:33 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *st)
{
	int	k;
	int	i;

	k = st->arr[st->top - 1];
	i = st->top;
	while (i > -1)
	{
		st->arr[i] = st->arr[i - 1];
		i--;
	}
	st->arr[0] = k;
}

void	rrotate(t_stack *st)
{
	int	k;
	int	i;

	k = st->arr[0];
	i = -1;
	while (i < st->top)
	{
		st->arr[i] = st->arr[i + 1];
		i++;
	}
	st->arr[st->top - 1] = k;
}
