/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 23:47:16 by dbatista          #+#    #+#             */
/*   Updated: 2024/12/18 17:39:28 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/src/libft.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stack
{
    int	*stack;
    int	size;
	int	capacity;
}   t_stack;

t_stack	*creat_stack(int capacity);
int	add_number(t_stack *stack, int num);

#endif