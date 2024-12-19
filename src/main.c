/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:01:43 by dbatista          #+#    #+#             */
/*   Updated: 2024/12/18 17:47:18 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main	(int argc, char ** argv)
{
	int	i;
	int	num;
	t_stack	*stack_a;

	if (argc < 2)
	{
		printf("Error, please trya again.\n");
		return (1);
	}
	//crio a pilha
	stack_a = creat_stack(argc - 1);
	if (!stack_a)
	{
		printf("Error stack not created");
		return (1);
	}
	//adiciono o numeros na pilha
	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		add_number(stack_a, num);
		i++;
	}
	//imprime a pilha
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