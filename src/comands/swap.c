/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:13 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/02 17:02:44 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack	*a)
{
	if (a->size < 2)
		return ;
	int	temp;

	temp = a->nod[0];
	a->nod[0] = a->nod[1];
	a->nod[1] = temp;
}

void	sb(t_stack	*b)
{
	if (b->size < 2)
		return ;
	int	temp;

	temp = b->nod[0];
	b->nod[0] = b->nod[1];
	b->nod[1] = temp;
}

void	ss(t_stack	*a, t_stack *b)
{
	if (a->size < 2)
		return ;
	else
		sa(a);
	if (b->size < 2)
		return ;
	else
		sb(b);
}