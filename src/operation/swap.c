/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:13 by dbatista          #+#    #+#             */
/*   Updated: 2024/12/29 00:00:01 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack	*a)
{
	if (a->size < 2)
		return ;
	int	temp;

	temp = a->node[0];
	a->node[0] = a->node[1];
	a->node[1] = temp;
}

void	sb(t_stack	*b)
{
	if (b->size < 2)
		return ;
	int	temp;

	temp = b->node[0];
	b->node[0] = b->node[1];
	b->node[1] = temp;
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