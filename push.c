/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:14:00 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/21 12:31:31 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pop_stack(t_stack *stack)
{
	if (stack->size != 0)
		stack->size--;
}

int		top_stack(t_stack *stack)
{
	if (stack->size == 0)
		exit(0);
	return (stack->list[stack->size - 1]);
}

void	push_stack(t_stack *stack, int element)
{
	if (stack->size == stack->capacity)
		exit(0);
	stack->list[stack->size++] = element;
}

void	push_a(t_stack *a, t_stack *b)
{
	push_stack(a, top_stack(b));
	pop_stack(b);
}

void	push_b(t_stack *a, t_stack *b)
{
	push_stack(b, top_stack(a));
	pop_stack(a);
}
