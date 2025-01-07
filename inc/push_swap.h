/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 23:47:16 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/06 16:34:49 by dbatista         ###   ########.fr       */
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
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*pre;
	bool			above_med;
	bool			cheap;
	int				index;
	int				num;
	int				move_cost;
}	t_stack;

t_stack	*find_min(t_stack *stack);
t_stack	*find_max(t_stack *stack);
t_stack	*find_last(t_stack *last);
int		stack_len(t_stack *stack);
int		stack_order(t_stack *stack);
int		syntax_error(char *nbr);
int		dup_error(t_stack *a, int nbr);
void	free_stack(t_stack **stack);
void	free_error(t_stack **a);
void	free_argv(char **args);
void	min_top(t_stack **a);
void	move_b_to_a(t_stack **a, t_stack **b);
void	prep_to_push(t_stack **stack, t_stack *target_node, char name_stack);
void	define_cheapest(t_stack *stack);
void	check_cost(t_stack *a, t_stack *b);
void	choose_target_b(t_stack	*a, t_stack	*b);
void	choose_target_a(t_stack	*a, t_stack	*b);
void	current_pos(t_stack *stack);
void	add_node_last(t_stack **stack, int nbr);
void	creat_stack(t_stack **a, char **argv);
void	sort_three(t_stack **a);
void	sort_stack(t_stack **a, t_stack **b);
void	init_node_a(t_stack *a, t_stack *b);
void	init_node_b(t_stack *a, t_stack *b);
void	sa(t_stack	**a, bool print);
void	sb(t_stack	**b, bool print);
void	ss(t_stack	**a, t_stack **b, bool print);
void	pa(t_stack **a, t_stack **b, bool print);
void	pb(t_stack **b, t_stack **a, bool print);
void	ra(t_stack **a, bool print);
void	rb(t_stack **b, bool print);
void	rr(t_stack **a, t_stack **b, bool print);
void	rra(t_stack **a, bool print);
void	rrb(t_stack **b, bool print);
void	rrr(t_stack **a, t_stack **b, bool print);

#endif