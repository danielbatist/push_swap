/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:35 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/02 17:02:44 by dbatista         ###   ########.fr       */
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
	temp = a->nod[0];
	i = 0;
	while (i < (a->size - 1))
	{
		a->nod[i] = a->nod[i + 1];
		i++;
	}
	a->nod[i] = temp;
}

void    rb(t_stack *b)
{
	if (b->size < 2)
		return ;
	int	i;
	int	temp;

	temp = 0;
	temp = b->nod[0];
	i = 0;
	while (i < (b->size - 1))
	{
		b->nod[i] = b->nod[i + 1];
		i++;
	}
	b->nod[i] = temp;
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