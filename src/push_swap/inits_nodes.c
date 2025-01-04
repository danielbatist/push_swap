/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:31:41 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/04 13:04:06 by dbatista         ###   ########.fr       */
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

void	init_node_a(t_stack *a, t_stack *b)
{
	current_pos(a);
	current_pos(b);
	choose_target(a, b);
	check_cost(a, b);
	define_cheapest(a);
}
