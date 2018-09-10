/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:14:00 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 17:28:41 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		top_stack(t_stack *stack)
{
	if (stack->size != 0)
		exit(0);
	return (stack->list[0]);
}
void	pa(t_stack *a, t_stack *b)
{
	int i;
	int temp;

	i = 0;
	temp = b->list[0];
	while (i < b->size - 1)
	{
		b->list[i] = b->list[i + 1];
		++i;
	}
	b->size = b->size - 1;
	i = a->size;
	while (i > 0)
	{
		a->list[i] = a->list[i - 1];
		i--;
	}
	a->list[0] = temp;
	a->size = a->size + 1;
	ft_putendl("pa");
}

void	pb(t_stack *a, t_stack *b)
{
	int i;
	int temp;

	i = 0;
	temp = a->list[0];
	while (i < a->size - 1)
	{
		a->list[i] = a->list[i + 1];
		++i;
	}
	a->size = a->size - 1;
	i = b->size;
	while (i > 0)
	{
		b->list[i] = b->list[i - 1];
		i--;
	}
	b->list[0] = temp;
	b->size = b->size + 1;
	ft_putendl("pb");
}
