/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:28:48 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/04 22:29:42 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_stack *stack)
{
	int	cont;

	if (!stack)
		return (0);
	cont = 0;
	while (stack)
	{
		stack = stack->next;
		cont++;
	}
	return (cont);
}

t_stack	*find_last(t_stack *last)
{
	if (!last)
		return (NULL);
	while (last->next)
	{
		last = last->next;
	}
	return (last);
}

int	stack_order(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_stack	*find_min(t_stack *stack)
{
	long	min;
	t_stack	*node_min;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->num < min)
		{
			min = stack->num;
			node_min = stack;
		}
		stack = stack->next;
	}
	return (node_min);
}

t_stack	*find_max(t_stack *stack)
{
	long	max;
	t_stack	*node_max;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->num > max)
		{
			max = stack->num;
			node_max = stack;
		}
		stack = stack->next;
	}
	return (node_max);
}
