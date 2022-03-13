/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:08:52 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:08:53 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_to_b(t_ab *stack, int min, int max, int mid)
{
	while (stack->a_size > 2)
	{
		if (stack->a->value > mid && stack->a->value != min
			&& stack->a->value != max)
		{
			push_check(stack, 'b');
			rotate_check(stack, 'b');
		}
		else if (stack->a->value <= mid && stack->a->value != min
			&& stack->a->value != max)
			push_check(stack, 'b');
		else
			rotate_check(stack, 'a');
	}
	if (stack->a->value == min)
		rotate_check(stack, 'a');
}
