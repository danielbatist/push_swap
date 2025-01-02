/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:29:55 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/02 17:06:08 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack	*a)
{
	if (a->size != 3)
		return ;
	if (a->nod[0] < a->nod[1] && a->nod[1] > a->nod[2] && a->nod[0] < a->nod[2])
	{
		sa(a);
		ra(a);
	}
	if (a->nod[0] > a->nod[1] && a->nod[1] < a->nod[2] && a->nod[0] < a->nod[2])
		sa(a);
	if (a->nod[0] < a->nod[1] && a->nod[1] > a->nod[2] && a->nod[0] > a->nod[2])
		rra(a);
	if (a->nod[0] > a->nod[1] && a->nod[1] < a->nod[2] && a->nod[0] > a->nod[2])
		ra(a);
	if (a->nod[0] > a->nod[1] && a->nod[1] > a->nod[2])
	{
		sa(a);
		rra(a);
	}
}
