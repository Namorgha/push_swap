/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:57:06 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/08 00:39:13 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill(t_stack *stack, int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	j = stack->top;
	while (i != -1)
	{
		if (!ft_isdigit(argv[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		stack->arr[j] = ft_atoi(argv[i]);
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		stack->top++;
		i--;
		j++;
	}
}

int	ft_strcount(char **c)
{
	int	i;

	i = 0;
	while (c[i])
	i++;
	return (i);
}

void	fill_stack(t_stack *stack, int argc, char **argv)
{
	argc = ft_strcount(argv);
	fill(stack, argc, argv);
}

// void	print_stack(t_stack *a)
// {
// 	int	i;

// 	i = a->top - 1;
// 	while (i >= 0)
// 	{
// 		write("||\t%i\t||\n", a->arr[i]);
// 		i--;
// 	}
// }
