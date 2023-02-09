/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:40:54 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/04 11:26:49 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// function that join element
char	*join(int argc, char **argv)
{
	char	*y;
	int		i;

	y = malloc(sizeof(char) * argc - 1);
	i = 1;
	while (i < argc)
	{
		y = ft_strjoin(y, argv[i]);
		y = ft_strjoin(y, " ");
		i++;
	}
	return (y);
}

//function that split element
char	**split_it(int argc, char **argv)
{
	char	*u;
	char	**number;

	u = join(argc, argv);
	number = ft_split(u, ' ');
	free (u);
	return (number);
}

// checking the smalest element of the stack
int	check_min(t_stack *st)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = st->arr[0];
	while (i < st->top)
	{
		if (tmp > st->arr[i])
			tmp = st->arr[i];
		i++;
	}
	return (tmp);
}

// checking the largest element of the stack
int	check_max(t_stack *st)
{
	int	tmp;
	int	i;

	tmp = st->arr[0];
	i = 0;
	while (i < st->top)
	{
		if (tmp < st->arr[i])
			tmp = st->arr[i];
		i++;
	}
	return (tmp);
}
