/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:13 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/07 11:04:27 by dbatista         ###   ########.fr       */
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
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack	**b, bool print)
{
	swap(b);
	if (!print)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack	**a, t_stack **b, bool print)
{
	swap(a);
	swap(b);
	if (!print)
		ft_putstr_fd("ss\n", 1);
}
