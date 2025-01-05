/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 23:47:16 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/04 22:30:37 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/src/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	int	num;
	int	index;
	bool			above_med;
	bool			cheap;
	struct s_stack *target_node;
	struct s_stack *next;
	struct s_stack *pre;
}	t_stack;

t_stack	*find_min(t_stack *stack);
t_stack	*find_max(t_stack *stack);
t_stack	*find_last(t_stack *last);
int		stack_len(t_stack *stack);
int		stack_order(t_stack *stack);
int		syntax_error(char *nbr);
int		dup_error(t_stack *a, int nbr);
void	current_pos(t_stack *stack);
void	add_node_last(t_stack **stack, int nbr);
void	creat_stack(t_stack **a, char **argv);
void	free_error(t_stack **a);
void	sort_three(t_stack *a);
void	sort_five(t_stack *a, t_stack *b);
void	sa(t_stack	*a);
void	sb(t_stack	*b);
void	ss(t_stack	*a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif