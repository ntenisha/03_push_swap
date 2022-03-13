/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:09:11 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:09:13 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push(t_node **to, t_node **from)
{
	t_node	*tmp_from;

	tmp_from = NULL;
	if ((*from) != (*from)->next)
	{
		tmp_from = (*from)->next;
		tmp_from->prev = (*from)->prev;
		(*from)->prev->next = tmp_from;
	}
	if (!(*to))
	{
		(*from)->next = *from;
		(*from)->prev = *from;
	}
	else
	{
		(*from)->next = *to;
		(*to)->prev->next = *from;
		(*from)->prev = (*to)->prev;
		(*to)->prev = *from;
	}
	*to = *from;
	*from = tmp_from;
}

void	push_check(t_ab *stack, char c)
{
	if (c == 'a' && stack->b)
	{
		push(&stack->a, &stack->b);
		stack->a_size++;
		stack->b_size--;
		write(1, "pa\n", 3);
	}
	if (c == 'b' && stack->a)
	{
		push(&stack->b, &stack->a);
		stack->a_size--;
		stack->b_size++;
		write(1, "pb\n", 3);
	}
}
