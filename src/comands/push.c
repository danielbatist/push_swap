/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:05 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/02 17:02:44 by dbatista         ###   ########.fr       */
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
	value = b->nod[0];
	i = 0;
	while (i < (b->size - 1))
	{
		b->nod[i] = b->nod[i + 1];
		i++;
	}
	b->size--;
	j = a->size;
	while (j > 0)
	{
		a->nod[j] = a->nod[j - 1];
		j--;
	}
	a->nod[0] = value;
	a->size++;    
}

void	pb(t_stack *a, t_stack *b)
{
	int	value;
	int	i;
	int	j;

	if (a->size == 0)
		return ;
	value = a->nod[0];
	i = 0;
	while (i < (a->size - 1))
	{
		a->nod[i] = a->nod[i + 1];
		i++;
	}
	a->size--;
	j = b->size;
	while (j > 0)
	{
		b->nod[j] = b->nod[j - 1];
		j--;
	}
	b->nod[0] = value;
	b->size++;
}