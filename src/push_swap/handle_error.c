/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:53:07 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/06 16:34:01 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	syntax_error(char *nbr)
{
	if (!(*nbr == '+' || *nbr == '-' || (*nbr >= '0' && *nbr <= '9')))
		return (1);
	if ((*nbr == '+' || *nbr == '-') && !(nbr[1] >= '0' && nbr[1] <= '9'))
		return (1);
	while (*++nbr)
	{
		if (!(*nbr >= '0' && *nbr <= '9'))
			return (1);
	}
	return (0);
}

int	dup_error(t_stack *a, int nbr)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->num == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_error(t_stack **a)
{
	free_stack(a);
	printf("Error\n");
	exit(1);
}

void	free_argv(char **args)
{
	int		i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}
