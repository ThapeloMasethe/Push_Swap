/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 09:24:29 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 13:37:52 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	int i;
	int first;

	i = a->size - 1;
	first = a->list[a->size - 1];
	while (i > 0)
	{
		a->list[i] = a->list[i - 1];
		i--;
	}
	a->list[0] = first;
	ft_putendl("rra");
}

void	rrb(t_stack *b)
{
	int i;
	int first;

	i = b->size - 1;
	first = b->list[b->size - 1];
	while (i > 0)
	{
		b->list[i] = b->list[i - 1];
		i--;
	}
	b->list[0] = first;
	ft_putendl("rrb");
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	ft_putendl("rrr");
}
