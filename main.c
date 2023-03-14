/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 20:14:12 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/13 00:40:14 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	alloc_array(t_stacks *stacks, char **argv)
{
	stacks->a->arr = malloc(sizeof(int) * ft_strcount(argv));
	if (!stacks->a->arr)
	{
		free(stacks->b);
		free(stacks->a);
		free(stacks);
		exit(1);
	}
	stacks->b->arr = malloc(sizeof(int) * ft_strcount(argv));
	if (!stacks->b->arr)
	{
		free(stacks->a->arr);
		free(stacks->b);
		free(stacks->a);
		free(stacks);
		exit(1);
	}
	stacks->a->top = 0;
	stacks->b->top = 0;
}

void	start_stuff(t_stacks *stacks, int argc, char **argv)
{
	char	**str;
	int		fr;

	fr = 0;
	str = split_it(argc, argv);
	fill_stack(stacks->a, argc, str);
	finish_the_revsort(stacks);
	free(stacks->a->arr);
	free(stacks->b->arr);
	free(stacks->a);
	free(stacks->b);
	free(stacks);
	while (str[fr])
		free(str[fr++]);
	free(str);
}

void	error(int fr, int argc, char **argv)
{
	if (argc < 2)
		exit(0);
	while (fr < argc)
	{
		if ((argv[fr][0] == ' ' && argv[fr][1] == 0))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		if (!argv[fr++][0])
		{
			write(2, "Error\n", 6);
			exit(1);
		}
	}
}

int	main(int argc, char **argv)
{
	int			fr;
	t_stacks	*stacks;

	fr = 0;
	error(fr, argc, argv);
	stacks = malloc(sizeof(t_stacks));
	if (!stacks)
		exit(1);
	stacks->a = malloc(sizeof(t_stack));
	if (!stacks->a)
	{
		free(stacks);
		exit(1);
	}
	stacks->b = malloc(sizeof(t_stack));
	if (!stacks->b)
	{
		free(stacks->a);
		free(stacks);
		exit(1);
	}
	alloc_array(stacks, argv);
	start_stuff(stacks, argc, argv);
	return (0);
}
