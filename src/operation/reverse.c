/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:48 by dbatista          #+#    #+#             */
/*   Updated: 2024/12/29 00:42:34 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_stack *a)
{
	if (a->size < 2)
		return ;
	int	i;
	int	temp;

	i = (a->size - 1);
	temp = a->node[i];
	while (i > 0)
	{
		a->node[i] = a->node[i - 1];
		i--;
	}
	a->node[0] = temp;
}

void    rrb(t_stack *b)
{
		if (b->size < 2)
		return ;
	int	i;
	int	temp;

	i = (b->size - 1);
	temp = b->node[i];
	while (i > 0)
	{
		b->node[i] = b->node[i - 1];
		i--;
	}
	b->node[0] = temp;
}

void    rrr(t_stack *a, t_stack *b)
{
	if (a->size < 2)
		return ;
	else
		rra(a);
	if (b->size < 2)
		return ;
	else
		rrb(b);
}