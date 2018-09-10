/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:22:52 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 13:32:59 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_commands(char *opr)
{
	if (!ft_strcmp(opr, "sa"))
		return (1);
	else if (!ft_strcmp(opr, "sb"))
		return (1);
	else if (!ft_strcmp(opr, "ss"))
		return (1);
	else if (!ft_strcmp(opr, "pa"))
		return (1);
	else if (!ft_strcmp(opr, "pb"))
		return (1);
	else if (!ft_strcmp(opr, "ra"))
		return (1);
	else if (!ft_strcmp(opr, "rb"))
		return (1);
	else if (!ft_strcmp(opr, "rr"))
		return (1);
	else if (!ft_strcmp(opr, "rra"))
		return (1);
	else if (!ft_strcmp(opr, "rrb"))
		return (1);
	else if (!ft_strcmp(opr, "rrr"))
		return (1);
	else
		return (0);
}

void	do_operations(t_stack *a, t_stack *b, char *str)
{
	if (!ft_strcmp(str, "sa"))
		sa(a);
	else if (!ft_strcmp(str, "sb"))
		sb(b);
	else if (!ft_strcmp(str, "ss"))
		ss(a, b);
	else if (!ft_strcmp(str, "pa"))
		pa(a, b);
	else if (!ft_strcmp(str, "pb"))
		pb(a, b);
	else if (!ft_strcmp(str, "ra"))
		ra(a);
	else if (!ft_strcmp(str, "rb"))
		rb(b);
	else if (!ft_strcmp(str, "rr"))
		rr(a, b);
	else if (!ft_strcmp(str, "rra"))
		rra(a);
	else if (!ft_strcmp(str, "rrb"))
		rrb(b);
	else if (!ft_strcmp(str, "rrr"))
		rrr(a, b);
}
