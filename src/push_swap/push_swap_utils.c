/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:28:48 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/04 11:28:57 by dbatista         ###   ########.fr       */
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
