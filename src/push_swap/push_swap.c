/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:53:13 by dbatista          #+#    #+#             */
/*   Updated: 2025/01/06 16:35:22 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	print_stack(t_stack *stack)
{
	t_stack *current = stack;

	while (current)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");
}*/

int	main	(int argc, char **argv)
{
	t_stack	*a;
	t_stack *b;
	char	**args;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv + 1;
	creat_stack(&a, args);
	if (!stack_order(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stack(&a, &b);
	}
	/*printf("Pilha Ordenada: ");
	print_stack(a);*/
	if (argc == 2)
		free_argv(args);
	free_stack(&a);
	return (0);
}
	