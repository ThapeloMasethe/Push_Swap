/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:32:29 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/21 12:47:09 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(int *stack, int size)
{
	int i;
	int hold;
	int temp;
	int first;

	i = 0;
	first = stack[size - 1];
	hold = stack[i];
	stack[i] = first;
	i++;
	while (i < size)
	{
		temp = stack[i];
		stack[i] = hold;
		hold = temp;
		i++;
	}
}

void	reverse_rotate_stack(int *stack, int size)
{
	int i;
	int hold;
	int temp;
	int last;

	i = size - 1;
	last = stack[0];
	temp = stack[i];
	stack[i] = last;
	i--;
	while (i >= 0)
	{
		temp = stack[i];
		stack[i] = hold;
		hold = temp;
		i--;
	}
}

void	rotate_both(int *a, int size_a, int *b, int size_b)
{
	rotate_stack(a, size_a);
	rotate_stack(b, size_b);
}

void	reverse_rotate_both(int *a, int size_a, int *b, int size_b)
{
	reverse_rotate_stack(a, size_a);
	reverse_rotate_stack(b, size_b);
}
