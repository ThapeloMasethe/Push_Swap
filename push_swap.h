/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 11:48:31 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/24 14:51:59 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct	s_stack
{
	int			capacity;
	int			size;
	int			steps;
	int			*list;
}				t_stack;

void			swap_stack(int *stack, int size);
void			swap_both(int *a, int size_a, int *b, int size_b);
void			pop_stack(t_stack *stack);
int				top_stack(t_stack *stack);
void			push_stack(t_stack *stack, int element);
void			push_a(t_stack *a, t_stack *b);
void			push_b(t_stack *a, t_stack *b);
void			rotate_stack(int *stack, int size);
void			reverse_rotate_stack(int *stack, int size);
void			rotate_both(int *a, int size_a, int *b, int size_b);
void			reverse_rotate_both(int *a, int size_a, int *b, int size_b);
int				is_sorted(t_stack *stack);
t_stack			*create_stack(int size);
void			sort_stack(t_stack *a, t_stack *b);
int				*get_numbers(int argc, char **argv);
#endif
