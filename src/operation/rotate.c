/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:35 by dbatista          #+#    #+#             */
/*   Updated: 2024/12/29 00:20:50 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack *a)
{
	if (a->size < 2)
		return ;
	int	i;
	int	temp;

	temp = 0;
	temp = a->node[0];
	i = 0;
	while (i < (a->size - 1))
	{
		a->node[i] = a->node[i + 1];
		i++;
	}
	a->node[i] = temp;
}

void    rb(t_stack *b)
{
	if (b->size < 2)
		return ;
	int	i;
	int	temp;

	temp = 0;
	temp = b->node[0];
	i = 0;
	while (i < (b->size - 1))
	{
		b->node[i] = b->node[i + 1];
		i++;
	}
	b->node[i] = temp;
}

void	rr(t_stack *a, t_stack *b)
{
	if (a->size < 2)
		return ;
	else
		ra(a);
	if (b->size < 2)
		return ;
	else
		rb(b);
}