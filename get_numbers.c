/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:47:17 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/26 14:58:27 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 	check_argues(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (++i < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]))
				return (0);
		}
		j++;
	}
	return (1);
}

int		*get_numbers(int argc, char **argv)
{
	int i;
	int j;
	int *stack;

	i = 0;
	j = 1;
	stack = (int *)malloc(sizeof(int ) * argc - 1);
	if (check_argues(argc, argv) == 0)
		return (0);
	else if (check_argues(argc, argv) == 1)
	{
		while (i++ < argc - 1)
			stack[i] = ft_atoi(argv[j++]);
	}
	return (stack);
}
