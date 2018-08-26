/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:49:00 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/24 10:53:35 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_stack *stack)
{
	int i;

	i = stack->size - 1;
	while (i >= 0 && (i - 1) >= 0)
	{
		if (stack->list[i] > stack->list[i - 1])
			return (i);
		i--;
	}
	return (0);
}

t_stack	*create_stack(int size)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack) * size);
	if (stack)
	{
		stack->list = (int *)malloc(sizeof(int) *size);
		stack->size = 0;
		stack->capacity = size;
	}
	return (stack);
}

void	sort_stack(t_stack *a, t_stack *b)
{
	int sort;

	sort = is_sorted(a);
	if (sort)
	{
		if (a->list[sort] == top_stack(a) && a->list[sort] > a->list[0])
		{
			rotate_stack(a->list, a->size);
			ft_putstr("ra\n");
		}
		else if (a->list[sort] == top_stack(a) && a->list[sort] > a->list[sort - 1])
		{
			ft_putstr("sa\n");
			swap_stack(a->list, a->size);
		}
		else if (a->list[sort] > a->list[sort - 1])
		{
			push_b(a, b);
			ft_putstr("pb\n");
		}
		sort_stack(a, b);
	}
	else if (b->size > 0)
	{
		if (top_stack(a) < top_stack(b))
		{
			push_a(a, b);
			ft_putstr("pa\n");
		}
		else if ((top_stack(a) > top_stack(b)) && b->size != 0)
		{
			push_a(a, b);
			ft_putstr("pa\n");
		}
		sort_stack(a, b);
	}
}
