/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:48 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/06 10:34:45 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_stack **stack)
{
	t_stack		*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = find_last(*stack);
	last->pre->next = NULL;
	last->next = *stack;
	last->pre = NULL;
	*stack = last;
	last->next->pre = last;
}

void	rra(t_stack **a, bool print)
{
	rev_rotate(a);
	if (!print)
		printf("rra\n");
}

void	rrb(t_stack **b, bool print)
{
	rev_rotate(b);
	if (!print)
		printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, bool print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (!print)
		printf("rrr\n");
}
