/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 11:45:40 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/26 12:19:55 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int		num;
	int 	i;
	int		j;
	//int		k;
	int		*stck;

	i = 0;
	j = 1;
	//stck = (int *)malloc(sizeof(int) * argc - 1);
	if (get_numbers(argc, argv) != 0)
		stck = get_numbers(argc, argv);
	else
		ft_putstr("Erorr\n");
	
	t_stack	*a;
	t_stack	*b;

	num = argc;
	a = create_stack(num);
	b = create_stack(num);
	a->list = ft_intdup(stck, num);
	a->size = num;
	sort_stack(a, b);
	printf("\n");
	i = 0;
	i = num - 1;
	while (i >= 0)
	{
		printf("%d\n", a->list[i]);
		i--;
	}
	return (0);
}
