/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:08:27 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:08:29 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate(t_node **head)
{
	t_node	*second;

	second = (*head)->next;
	(*head) = second;
}

void	rotate_check(t_ab *stack, char c)
{
	if (c == 'a' && stack->a)
	{
		rotate(&stack->a);
	}
	if (c == 'b' && stack->b)
	{
		rotate(&stack->b);
	}
	if (c == 'r' && stack->a && stack->b)
	{
		rotate(&stack->a);
		rotate(&stack->b);
	}
}

void	reverse_rotate(t_node **head, int stack_size)
{
	int		j;
	t_node	*tmp;

	j = 0;
	tmp = *head;
	while (j < stack_size - 1)
	{
		tmp = tmp->next;
		j++;
	}
	(*head) = tmp;
}

void	reverse_rotate_check(t_ab *stack, char c)
{
	if (c == 'a' && stack->a)
		reverse_rotate(&stack->a, stack->a_size);
	if (c == 'b' && stack->b)
		reverse_rotate(&stack->b, stack->b_size);
	if (c == 'r' && stack->a && stack->b)
	{
		reverse_rotate(&stack->a, stack->a_size);
		reverse_rotate(&stack->b, stack->b_size);
	}
}
