/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:09:17 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:09:18 by ntenisha         ###   ########.fr       */
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
		write(1, "ra\n", 3);
	}
	if (c == 'b' && stack->b)
	{
		rotate(&stack->b);
		write(1, "rb\n", 3);
	}
	if (c == 'r' && stack->a && stack->b)
	{
		rotate(&stack->a);
		rotate(&stack->b);
		write(1, "rr\n", 3);
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
	{
		reverse_rotate(&stack->a, stack->a_size);
		write(1, "rra\n", 4);
	}
	if (c == 'b' && stack->b)
	{
		reverse_rotate(&stack->b, stack->b_size);
		write(1, "rrb\n", 4);
	}
	if (c == 'r' && stack->a && stack->b)
	{
		reverse_rotate(&stack->a, stack->a_size);
		reverse_rotate(&stack->b, stack->b_size);
		write(1, "rrr\n", 4);
	}
}
