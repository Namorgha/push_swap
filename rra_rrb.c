/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:54:03 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/08 00:39:03 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *st, int i)
{
	rrotate(st);
	if (i == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack *st, int i)
{
	rrotate(st);
	if (i == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stacks *st, int i)
{
	rra(st->a, i);
	rrb(st->b, i);
}
