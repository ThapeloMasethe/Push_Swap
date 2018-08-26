/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 09:17:17 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/26 15:24:25 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	check_commands(char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		return (1);
	else if (ft_strcmp(str, "sb") == 0)
		return (1);	
	else if (ft_strcmp(str, "ss") == 0)
		return (1);
	else if (ft_strcmp(str, "ra") == 0)
		return (1);
	else if (ft_strcmp(str, "rb") == 0)
		return (1);
	else if (ft_strcmp(str, "rr") == 0)
		return (1);
	else if (ft_strcmp(str, "rra") == 0)
		return (1);
	else if (ft_strcmp(str, "rrb") == 0)
		return (1);
	else if (ft_strcmp(str, "rrr") == 0)
		return (1);
	else if (ft_strcmp(str, "pa") == 0)
		return (1);
	else if (ft_strcmp(str, "pb") == 0)
		return (1);
	else
		return (0);
}

static int check_args(int argc, char **argv)
{
	int i;
	int j;
	int k;
	
	i = 0;
	k = 0;
	while (i++ < argc - 1)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
		}
	}
	return (1);
}

int		get_commands(char *line, int argc, char **argv)
{
	if (check_args(argc, argv) == 1)
	{
		if (check_commands(line) == 1)
		{
			ft_putendl(line);
			ft_strdel(&line);
		}
		else if (!check_commands(line))
		{
			ft_strdel(&line);
			ft_putendl("Error");
			exit(0);
		}
	}
	return (1);
}
int		main(int argc, char **argv)
{
	char *line;

	if (argc == 1)
		return (0);
	if (check_args(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		exit(0);
	}
	while (get_next_line(0, &line))
		get_commands(line, argc, argv);
	ft_putendl("OK");
	return (0);
}
