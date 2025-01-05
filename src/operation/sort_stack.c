/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:26:49 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/05 13:27:38 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	t_stack	*get_cheap(t_stack *stack)
{
	if (!stack)
		return ;
	while (stack)
	{
		if (stack->cheap)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

static void	rot_both(t_stack **a, t_stack **b, t_stack *node_cheap)
{
	while ((*b != node_cheap->target_node) && (*a != node_cheap))
		rr(a, b);
	current_pos(*a);
	current_pos(*b);
}

static void	rev_rot_both(t_stack **a, t_stack **b, t_stack *node_cheap)
{
	while (*b != node_cheap->target_node && *a != node_cheap)
		rrr(a, b);
	current_pos(*a);
	current_pos(*b);
}

static void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack		*nod_cheap;

	nod_cheap = get_cheap(*a);
	if (nod_cheap->above_med && nod_cheap->target_node->above_med)
		rot_both(a, b, nod_cheap);
	else if (!(nod_cheap->above_med) && !(nod_cheap->target_node->above_med))
		rev_rot_both(a, b, nod_cheap);
	prep_to_push(a, nod_cheap, 'a');
	prep_to_push(b, nod_cheap->target_node, 'b');
	pb(a, b);
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int	len;

	len = stack_len(*a);
	if (len-- > 3 && !stack_order)
		pb(a, b);
	if (len-- > 3 && !stack_order)
		pb(a, b);
	while (len-- > 3 && !stack_order)
	{
		init_node_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_node_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_pos(*a);
	min_top(a);
}
