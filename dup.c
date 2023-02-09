/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:02:01 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/07 23:40:02 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	duplicate(t_stacks *st)
{
	int	*idx;
	int	i;

	idx = cpy_and_sort(st);
	i = 0;
	while (idx[i])
	{
		if (idx[i] == idx[i + 1])
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	free(idx);
}
