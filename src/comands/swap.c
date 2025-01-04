/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 23:49:13 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/03 14:17:07 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack	*a)
{
	if (a->size < 2)
		return ;
	int	temp;

	temp = a->num[0];
	a->num[0] = a->num[1];
	a->num[1] = temp;
}

void	sb(t_stack	*b)
{
	if (b->size < 2)
		return ;
	int	temp;

	temp = b->num[0];
	b->num[0] = b->num[1];
	b->num[1] = temp;
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