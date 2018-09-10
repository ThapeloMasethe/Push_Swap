/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 11:48:31 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/10 13:32:39 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include "libft/libft.h"

typedef struct	s_stack
{
	int			capacity;
	int			size;
	int			elements;
	int			*list;
}				t_stack;

void			sa(t_stack *a);
void			sb(t_stack *b);
void			ss(t_stack *a, t_stack *b);
void			ra(t_stack *a);
void			rb(t_stack *b);
void			rr(t_stack *a, t_stack *b);
void			rra(t_stack *a);
void			rrb(t_stack *b);
void			rrr(t_stack *a, t_stack *b);
void			pa(t_stack *a, t_stack *b);
void			pb(t_stack *a, t_stack *b);
void			push_stack(t_stack *stack, int element);
void			push_a(t_stack *a, t_stack *b);
void			push_b(t_stack *a, t_stack *b);
void			rotate_stack(int *stack, int size);
void			reverse_rotate_stack(int *stack, int size);
void			rotate_both(int *a, int size_a, int *b, int size_b);
void			reverse_rotate_both(int *a, int size_a, int *b, int size_b);

void			pop_stack(t_stack *stack);
int				top_stack(t_stack *stack);

int				is_sorted(t_stack *stack);
t_stack			*create_stack(int size);
void			sorts_stack(t_stack *a, t_stack *b);
int				get_numbers(t_stack *stack, int argc, char **argv);

int				check_numbers(t_stack *stack, int argc, char **argv);
int				check_args(int argc, char **argv);
int				get_commands(char *line, int argc, char **argv);
void			do_operations(t_stack *a, t_stack *b, char *str);
int				check_duplicates(int argc, char **argv);
int				check_sorted(int argc, char **argv);
int				check_commands(char *opr);
int				check_two_args(int argc, char **argv);
void			main_sort(t_stack *a, t_stack *b);
#endif
