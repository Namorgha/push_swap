/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:56:13 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/08 00:38:18 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *st, int i)
{
	rotate(st);
	if (i == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack *st, int i)
{
	rotate(st);
	if (i == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stacks *st, int i)
{
	ra(st->a, i);
	rb(st->b, i);
}
