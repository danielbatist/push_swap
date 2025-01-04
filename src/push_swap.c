/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:53:13 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/03 13:35:46 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main	(int argc, char ** argv)
{
	int	i;
	int	num;
	t_stack	*a;
	t_stack *b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	creat_stack(&a, argv + 1);
	if (!stack_order(a));
	if (stack_len(a) == 2)
		sa(&a);
	else if (stack_len(a) == 3)
		sort_three(&a);
	else
		sort_stacks(&a, &b);
	free_stack(&a);
	return (0);
}
	