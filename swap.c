/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 12:04:43 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/21 12:13:37 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(int *stack, int size)
{
	int temp;

	temp = stack[size - 2];
	stack[size - 2] = stack[size - 1];
	stack[size - 1] = temp;
}

void	swap_both(int *a, int size_a, int *b, int size_b)
{
	swap_stack(a, size_a);
	swap_stack(b, size_b);
}
