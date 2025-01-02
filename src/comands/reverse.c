/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:48 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/02 17:02:44 by dbatista         ###   ########.fr       */
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
	temp = a->nod[i];
	while (i > 0)
	{
		a->nod[i] = a->nod[i - 1];
		i--;
	}
	a->nod[0] = temp;
}

void    rrb(t_stack *b)
{
		if (b->size < 2)
		return ;
	int	i;
	int	temp;

	i = (b->size - 1);
	temp = b->nod[i];
	while (i > 0)
	{
		b->nod[i] = b->nod[i - 1];
		i--;
	}
	b->nod[0] = temp;
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