/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:29:55 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/06 10:28:10 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack	**a)
{
	t_stack		*big_node;

	big_node = find_max(*a);
	if (big_node == *a)
		ra(a, false);
	else if (big_node == (*a)->next)
		rra(a, false);
	if ((*a)->num > (*a)->next->num)
		sa(a, false);
}
