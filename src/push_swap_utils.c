/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:28:48 by dbatista          #+#    #+#             */
/*   Updated: 2024/12/27 00:55:50 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*creat_stack(int capacity)
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if (!new_stack)
		return (NULL);
	new_stack->node = malloc(capacity * (sizeof(int)));
	if (!new_stack->node)
	{
		free(new_stack);
		return (NULL);
	}
	new_stack->size = 0;
	new_stack->capacity = capacity;
	return (new_stack);
}

int	add_number(t_stack *stack, int num)
{
	if (stack->size >= stack->capacity)
		return (-1);
	stack->node[stack->size] = num;
	stack->size++;
	return (0);
}