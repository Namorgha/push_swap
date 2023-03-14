/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namorgha <namorgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 01:00:00 by namorgha          #+#    #+#             */
/*   Updated: 2023/02/12 23:37:58 by namorgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct t_stack
{
	int	*arr;
	int	top;
}	t_stack;

typedef struct t_stacks
{
	t_stack	*a;
	t_stack	*b;
}	t_stacks;

typedef struct s_data
{
	int	start;
	int	top_idx;
	int	end;
	int	stack_size;
	int	*sorted_ref;
}		t_data;
void		fill_stack(t_stack *stack, int argc, char **argv);
void		end(t_stacks *st);
void		checker_cmp(t_stacks *st, char *str);
void		return_it(t_stacks *st);
int			rev_sort(t_stacks *st);
char		*join(int argc, char **argv);
char		**split_it(int argc, char **argv);
void		sort_3(t_stacks *st);
void		duplicate(t_stacks *st);
void		sorting_all(t_stacks *st);
int			ft_strcount(char **c);
void		sort_5(t_stacks *st);
void		move_to_a(t_stacks *st);
int			all_sorted(t_stacks *st);
int			*cpy_and_sort(t_stacks *st);
int			hell(t_stacks *st);
int			check_min(t_stack *st);
void		sort_2(t_stacks *st);
int			should_ra(t_stack *st, int k);
int			check_max(t_stack *st);
void		is_sorted(t_stacks *st);
void		swap(t_stack *st);
void		finish_the_revsort(t_stacks *st);
void		reverse_algo(t_stacks *st);
void		check_input(t_stacks *st, int fd);
void		rrotate(t_stack *st);
void		rotate(t_stack *st);
void		rrb(t_stack *st, int i);
void		rra(t_stack *st, int i);
void		rrr(t_stacks *st, int i);
void		rr(t_stacks *st, int i);
void		ra(t_stack *st, int i);
void		rb(t_stack *st, int i);
void		pop(t_stack *st);
void		pa(t_stacks *st, int i);
void		pb(t_stacks *st, int i);
void		push(t_stack *st, int n);
void		sa(t_stacks *st, int i);
void		sb(t_stacks *st, int i);
void		ss(t_stacks *st, int i);

#endif
