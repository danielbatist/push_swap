/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:31:41 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/04 22:43:36 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_pos(t_stack *stack)
{
	int	i;
	int	median;

	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	i = 0;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_med = true;
		else
			stack->above_med = false;
		stack = stack->next;
		i++;
	}
}

void	choose_targer_a(t_stack	*a, t_stack	*b)
{
	t_stack	*index_b;
	t_stack	*node_target;
	long	best_node_target;

	while (a)
	{
		best_node_target = LONG_MIN;
		index_b = b;
		while (index_b)
		{
			if (index_b->num < a->num && index_b->num > best_node_target)
			{
				best_node_target = index_b->num;
				node_target = index_b;
			}
			index_b = index_b->next;
		}
		if (best_node_target == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = node_target;
		a = a->next;
	}
}

void	init_node_a(t_stack *a, t_stack *b)
{
	current_pos(a);
	current_pos(b);
	choose_target_a(a, b);
	check_cost(a, b);
	define_cheapest(a);
}
