/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:48:52 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 13:35:41 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	duplicate(char **str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int			check_duplicates(int argc, char **argv)
{
	int		i;
	char	**str;

	i = 1;
	if (argc == 2)
	{
		str = ft_strsplit(argv[1], ' ');
		if (duplicate(str))
			return (0);
	}
	else if (argc > 2)
	{
		if (duplicate(argv))
			return (0);
	}
	return (1);
}

int			check_sorted(int argc, char **argv)
{
	int		i;
	char	**str;

	i = 1;
	if (argc == 2)
	{
		str = ft_strsplit(argv[1], ' ');
		while (str[i])
		{
			if (ft_atoi(str[i - 1]) > ft_atoi(str[i]))
				return (0);
			i++;
		}
	}
	else if (argc > 2)
	{
		while (i++ < argc)
			if (ft_atoi(argv[i - 1]) < ft_atoi(argv[i]))
				return (0);
	}
	return (1);
}

int			check_two_args(int argc, char **argv)
{
	if (argc == 3)
	{
		if (ft_atoi(argv[1]) == ft_atoi(argv[2]))
			return (0);
		else if (ft_atol(argv[1]) > ft_atol(argv[2]))
			return (2);
	}
	return (1);
}
