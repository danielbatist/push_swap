/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:28:48 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/03 23:08:57 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	creat_stack(t_stack **a, char **argv)
{
	int	num;
	int	i;

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
		last_add_node(a, num);
	}
}

void	last_add_node(t_stack **stack, int nbr)
{
	t_stack *node;
	t_stack *last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
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