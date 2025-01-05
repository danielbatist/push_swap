/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_utils_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:45:44 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/05 13:03:35 by dbatista         ###   ########.fr       */
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
			if ((index_b->num < a->num) && (index_b->num > best_node_target))
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

void	choose_targer_b(t_stack	*a, t_stack	*b)
{
	t_stack		*index_a;
	t_stack		*node_target;
	long		best_node_target;

	while (b)
	{
		best_node_target = LONG_MAX;
		index_a = a;
		while (index_a)
		{
			if ((index_a->num > b->num) && (index_a->num < best_node_target))
			{
				best_node_target = index_a->num;
				node_target = index_a;
			}
			index_a = index_a->next;
		}
		if (best_node_target == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = node_target;
		b = b->next;
	}
}


void	check_cost(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->move_cost = a->index;
		if (!a->above_med)
			a->move_cost = len_a - a->index;
		if (a->target_node->above_med)
			a->move_cost += a->target_node->index;
		else
			a->move_cost += len_b - a->target_node->index;
		a = a->next;
	}
}

void	define_cheapest(t_stack *stack)
{
	long	value_cheapest;
	t_stack	*node_cheapest;

	if (!stack)
		return ;
	node_cheapest = LONG_MAX;
	while (stack)
	{
		if (stack->move_cost < value_cheapest)
		{
			value_cheapest = stack->move_cost;
			node_cheapest = stack;
		}
		stack = stack->next;
	}
	node_cheapest->cheap = true;
}

