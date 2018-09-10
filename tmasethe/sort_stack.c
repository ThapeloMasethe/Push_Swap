/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:49:00 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 17:27:38 by tmasethe         ###   ########.fr       */
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

void	sort_one(t_stack *a, t_stack *b)
{
	int srt;

	srt = is_sorted(a);
	if (a->list[srt] == top_stack(a) && a->list[srt] > a->list[0])
		ra(a);
	else if (a->list[srt] == top_stack(a) && a->list[srt] > a->list[srt - 1])
		sa(a);
	else if (a->list[srt] > a->list[srt - 1])
		pb(a, b);
	sorts_stack(a, b);
}

void	sort_two(t_stack *a, t_stack *b)
{
	if (top_stack(a) < top_stack(b))
	{
		pa(a, b);
	}
	else if ((top_stack(a) > top_stack(b)) && b->size != 0)
	{
		pa(a, b);
	}
	sorts_stack(a, b);
}

void	sorts_stack(t_stack *a, t_stack *b)
{
	int	srt;

	srt = is_sorted(a);
	if (srt)
		sort_one(a, b);
	else if (b->size > 0)
		sort_two(a, b);
}
