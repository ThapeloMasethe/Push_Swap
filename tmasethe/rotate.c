/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:32:29 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 13:38:27 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	int i;
	int last;

	last = a->list[0];
	i = 0;
	while (i < a->size - 1)
	{
		a->list[i] = a->list[i + 1];
		i++;
	}
	a->list[i] = last;
	ft_putendl("ra");
}

void	rb(t_stack *b)
{
	int i;
	int last;

	i = 0;
	last = b->list[0];
	while (i < b->size - 1)
	{
		b->list[i] = b->list[i + 1];
		i++;
	}
	b->list[i] = last;
	ft_putendl("rb");
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	ft_putendl("rr");
}
