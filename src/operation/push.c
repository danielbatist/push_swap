/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:05 by dbatista          #+#    #+#             */
/*   Updated: 2024/12/28 23:33:11 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa(t_stack *a, t_stack *b)
{
	int	value;
	int	i;
	int	j;

	if (b->size == 0)
		return ;
	value = b->node[0];
	i = 0;
	while (i < (b->size - 1))
	{
		b->node[i] = b->node[i + 1];
		i++;
	}
	b->size--;
	j = a->size;
	while (j > 0)
	{
		a->node[j] = a->node[j - 1];
		j--;
	}
	a->node[0] = value;
	a->size++;    
}

void	pb(t_stack *a, t_stack *b)
{
	int	value;
	int	i;
	int	j;

	if (a->size == 0)
		return ;
	value = a->node[0];
	i = 0;
	while (i < (a->size - 1))
	{
		a->node[i] = a->node[i + 1];
		i++;
	}
	a->size--;
	j = b->size;
	while (j > 0)
	{
		b->node[j] = b->node[j - 1];
		j--;
	}
	b->node[0] = value;
	b->size++;
}