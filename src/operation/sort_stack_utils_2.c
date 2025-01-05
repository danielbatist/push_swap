/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_utils_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 12:34:02 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/05 13:26:10 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_top(t_stack **a)
{
	while ((*a)->num != find_min(*a)->num)
	{
		if (find_min(*a)->above_med)
			ra(a);
		else
			rra(a);
	}
}

void	move_b_to_a(t_stack **a, t_stack **b)
{
	prep_to_push(a, (*b)->target_node, 'a');
	pa(a, b);
}

void	prep_to_push(t_stack **stack, t_stack *target_node, char name_stack)
{
	while (*stack != target_node)
	{
		if (name_stack == 'a')
		{
			if (target_node->above_med)
				ra(stack);
			else
				rra(stack);
		}
		else if (name_stack == 'b')
		{
			if (target_node->above_med)
				rb(stack);
			else
				rrb(stack);
		}
	}
}
