/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:04:43 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 16:41:49 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int temp;

	temp = a->list[0];
	a->list[0] = a->list[1];
	a->list[1] = temp;
	ft_putendl("sa");
}

void	sb(t_stack *b)
{
	int temp;

	temp = b->list[0];
	b->list[0] = b->list[1];
	b->list[1] = temp;
	ft_putendl("sb");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	ft_putendl("ss");
}
