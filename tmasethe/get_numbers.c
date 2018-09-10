/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 16:17:49 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 15:38:48 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	numbers(t_stack *stack, char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		stack->list[i] = ft_atoi(str[i]);
		i++;
	}
}

int		get_numbers(t_stack *stack, int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	if (check_numbers(stack, argc, argv))
	{
		if (argc > 2)
		{
			j = 0;
			while (++i < argc)
			{
				stack->list[j] = ft_atoi(argv[i]);
				j++;
			}
		}
		else if (argc == 2)
		{
			str = ft_strsplit(argv[1], ' ');
			numbers(stack, str);
		}
	}
	return (1);
}
