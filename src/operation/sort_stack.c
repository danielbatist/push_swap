/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:26:49 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/04 12:30:38 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **a, t_stack **b)
{
	int	len;

	len = stack_len(*a);
	if (len-- > 3 && !stack_order)
		pb(a, b);
	if (len-- > 3 && !stack_order)
		pb(a, b);
	while (len-- > 3 && !stack_order)
	{
		init_node_a(*a, *b);
	}
	
	
}