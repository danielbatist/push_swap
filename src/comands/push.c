/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:05 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/05 20:47:26 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **dst, t_stack **src)
{
	t_stack		*push_node;

	if (!src)
		return ;
	push_node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->pre = NULL;
	push_node->pre = NULL;
	if (!*dst)
	{
		*dst = push_node;
		push_node->next = NULL;
	}
	else
	{
		push_node->next = *dst;
		push_node->next->pre = push_node;
		*dst = push_node;
	}
}

void	pa(t_stack **a, t_stack **b, bool print)
{
	push(a, b);
	if (!print)
		printf("pa\n");
}

void	pb(t_stack **b, t_stack **a, bool print)
{
	push(b, a);
	if (!print)
		printf("pb\n");
}
