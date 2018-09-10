/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:35:06 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 17:29:01 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int size)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack) * size);
	if (stack)
	{
		stack->list = (int *)malloc(sizeof(int) * size);
		stack->size = 0;
		stack->capacity = size;
	}
	return (stack);
}

void	free_leaks(t_stack *a, t_stack *b)
{
	free(a->list);
	free(b->list);
	free(a);
	free(b);
}

int		main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	stack;

	if (!check_numbers(&stack, argc, argv) || (argc == 1)
			|| !check_duplicates(argc, argv))
		return (0);
	a = create_stack(stack.size);
	b = create_stack(stack.size);
	if (get_numbers(a, argc, argv))
		a->size = stack.size;
	main_sort(a, b);
	//sorts_stack(a, b);
	free_leaks(a, b);
	return (0);
}
