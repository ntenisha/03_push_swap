/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:09:22 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:09:24 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_node **head)
{
	int		tmp;

	tmp = (*head)->value;
	(*head)->value = (*head)->next->value;
	(*head)->next->value = tmp;
}

void	swap_check(t_ab *stack, char c)
{
	if (c == 'a' && stack->a && stack->a->next)
	{
		swap(&stack->a);
		write(1, "sa\n", 3);
	}
	if (c == 'b' && stack->b && stack->b->next)
	{
		swap(&stack->b);
		write(1, "sb\n", 3);
	}
	if (c == 's' && stack->a && stack->a->next && stack->b && stack->b->next)
	{
		swap(&stack->a);
		swap(&stack->b);
		write(1, "ss\n", 3);
	}
}
