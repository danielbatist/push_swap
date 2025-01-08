/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:01:56 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/07 17:49:22 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node_last(t_stack **stack, int nbr)
{
	t_stack	*node;
	t_stack	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->next = NULL;
	node->num = nbr;
	node->cheap = 0;
	if (!(*stack))
	{
		*stack = node;
		node->pre = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->pre = last_node;
	}
}

void	creat_stack(t_stack **a, char **argv)
{
	long	num;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (syntax_error(argv[i]))
			free_error(a);
		num = ft_atoi(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			free_error(a);
		if (dup_error(*a, num))
			free_error(a);
		add_node_last(a, num);
		i++;
	}
}
