/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:29:55 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/03 14:17:07 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack	*a)
{
	if (a->size != 3)
		return ;
	if (a->num[0] < a->num[1] && a->num[1] > a->num[2] && a->num[0] < a->num[2])
	{
		sa(a);
		ra(a);
	}
	if (a->num[0] > a->num[1] && a->num[1] < a->num[2] && a->num[0] < a->num[2])
		sa(a);
	if (a->num[0] < a->num[1] && a->num[1] > a->num[2] && a->num[0] > a->num[2])
		rra(a);
	if (a->num[0] > a->num[1] && a->num[1] < a->num[2] && a->num[0] > a->num[2])
		ra(a);
	if (a->num[0] > a->num[1] && a->num[1] > a->num[2])
	{
		sa(a);
		rra(a);
	}
}
