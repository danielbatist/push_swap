/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inits_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:31:41 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/05 13:25:49 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_node_b(t_stack *a, t_stack *b)
{
	current_pos(a);
	current_pos(b);
	choose_target_b(a, b);
}

void	init_node_a(t_stack *a, t_stack *b)
{
	current_pos(a);
	current_pos(b);
	choose_target_a(a, b);
	check_cost(a, b);
	define_cheapest(a);
}
