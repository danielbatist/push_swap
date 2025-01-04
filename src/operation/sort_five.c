/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:07:53 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/03 14:17:07 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_pos(t_stack *a, int value)
{
	int	i;

	i = 0;
	while (i < a->size)
	{
		if (a->num[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

static void	push_min_to_b(t_stack *a, t_stack *b, int value)
{
	int	pos;

	pos = find_pos(a, value);
	if (pos == - 1)
		return ;
	if (pos <= (a->size / 2))
	{
		while (a->num[0] != value)
			ra(a);
	}
	else
	{
		while (a->num[0] != value)
			rra(a);
	}
	pb(a, b);
}

static void	find_mins(t_stack *a, int *min1, int *min2)
{
	int	i;
	int	tmp;

	*min1 = a->num[0];
	*min2 = a->num[1];
	tmp = 0;
	if (*min1 > *min2)
	{
		tmp = *min1;
		*min1 = *min2;
		*min2 = tmp;
	}
	i = 2;
	while (i < a->size)
	{
		if (a->num[i] < *min1)
		{
			*min2 = *min1;
			*min1 = a->num[i];
		}
		else if (a->num[i] < *min2)
			*min2 = a->num[i];
		i++;
	}
}

void	sort_five(t_stack *a, t_stack *b)
{
	int	min1;
	int	min2;

	if (a->size != 5)
		return ;
	find_mins(a, &min1, &min2);
	push_min_to_b(a, b, min1);
	push_min_to_b(a, b, min2);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
