/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:01:43 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/02 18:35:05 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main	(int argc, char ** argv)
{
	int	i;
	int	num;
	t_stack	*stack_a;
	t_stack *stack_b;

	if (argc < 2)
	{
		printf("Error, please trya again.\n");
		return (1);
	}
	//cria a pilha "a" 
	stack_a = creat_stack(argc - 1);
	if (!stack_a)
	{
		printf("Error stack not created");
		return (1);
	}
	//cria a pilha "b"
	stack_b = creat_stack(argc - 1);
	if (!stack_b)
	{
		printf("Error stack not created");
		return (1);
	}
	//adiciono o numeros na pilha "a"
	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		add_number(stack_a, num);
		i++;
	}
	//imprime a pilha "a"
	printf("Pilha a antes push:\n");
	i = 0;
	while (i < stack_a->size)
	{
		printf("%d\n", stack_a->nod[i]);
		i++;
	}
	printf("Pilha b antes push:\n");
	if (stack_b->size <= 0)
	{
		printf("stack empty!!!\n");
		printf("----------------------\n");
	}
	//zona de teste
	sort_five(stack_a, stack_b);
	printf("Pilha a depois push:\n");
	i = 0;
	while (i < stack_a->size)
	{
		printf("%d\n", stack_a->nod[i]);
		i++;
	}
	//imprime a pilha "b"
	printf("Pilha b depois push:\n");
	if (stack_b->size <= 0)
		printf("stack empty!!!\n");
	else
	{
		i = 0;
		while (i < stack_b->size)
		{
			printf("%d\n", stack_b->nod[i]);
			i++;
		}
	}
	free(stack_a->nod);
	free(stack_a);
	free(stack_b->nod);
	free(stack_b);
	return (0);
}