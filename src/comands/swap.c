/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:13 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/06 10:35:15 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **head)
{
	if (!*head || !(*head)->next)
		return ;
	*head = (*head)->next;
	(*head)->pre->pre = *head;
	(*head)->pre->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->pre = (*head)->pre;
	(*head)->next = (*head)->pre;
	(*head)->pre = NULL;
}

void	sa(t_stack	**a, bool print)
{
	swap(a);
	if (!print)
		printf("sa\n");
}

void	sb(t_stack	**b, bool print)
{
	swap(b);
	if (!print)
		printf("sb\n");
}

void	ss(t_stack	**a, t_stack **b, bool print)
{
	swap(a);
	swap(b);
	if (!print)
		printf("ss\n");
}
