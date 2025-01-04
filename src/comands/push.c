/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:05 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/03 14:17:07 by dbatista         ###   ########.fr       */
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
	value = b->num[0];
	i = 0;
	while (i < (b->size - 1))
	{
		b->num[i] = b->num[i + 1];
		i++;
	}
	b->size--;
	j = a->size;
	while (j > 0)
	{
		a->num[j] = a->num[j - 1];
		j--;
	}
	a->num[0] = value;
	a->size++;    
}

void	pb(t_stack *a, t_stack *b)
{
	int	value;
	int	i;
	int	j;

	if (a->size == 0)
		return ;
	value = a->num[0];
	i = 0;
	while (i < (a->size - 1))
	{
		a->num[i] = a->num[i + 1];
		i++;
	}
	a->size--;
	j = b->size;
	while (j > 0)
	{
		b->num[j] = b->num[j - 1];
		j--;
	}
	b->num[0] = value;
	b->size++;
}