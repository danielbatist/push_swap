/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:35 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/06 11:07:25 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack		*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	last_node = find_last(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->pre = NULL;
	last_node->next->pre = last_node;
	last_node->next->next = NULL;
}

void	ra(t_stack **a, bool print)
{
	rotate(a);
	if (!print)
		printf("ra\n");
}

void	rb(t_stack **b, bool print)
{
	rotate(b);
	if (!print)
		printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, bool print)
{
	rotate(a);
	rotate(b);
	if (!print)
		printf("rr\n");
}
