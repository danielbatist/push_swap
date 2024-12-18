/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:01:43 by dbatista          #+#    #+#             */
/*   Updated: 2024/12/18 11:11:12 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main	(int argc, char ** argv)
{
	int	i;
	int	num;
	t_stack	*stack_a;

	if (argc < 2)
	{
		printf("Error, please trya again.\n");
	}
	stack_a = creat_stack(argc - 1);
	i = 0;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		add_number(stack_a, num);
		i++;
	}
	i = 0;
	while (i < stack_a->size)
	{
		printf("%d\n", stack_a->stack[i]);
		i++;
	}
	free(stack_a->stack);
	free(stack_a);
	return (0);
}