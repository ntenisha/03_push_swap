/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spisok.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:10:09 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:10:10 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node	*create(int data)
{
	t_node	*tmp;

	tmp = (t_node *)malloc(sizeof(t_node));
	if (!tmp)
		return (0);
	tmp->value = data;
	tmp->next = tmp;
	tmp->prev = tmp;
	return (tmp);
}

void	add_ellement_end(t_node **a, t_node *new)
{
	t_node	*tmp;

	tmp = *a;
	if (!*a)
		*a = new;
	if (tmp)
	{
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev->next = new;
		tmp->prev = new;
	}
}

void	create_stack(t_ab *stack)
{
	t_node	*head_a;
	t_node	*head_b;

	head_a = NULL;
	head_b = NULL;
	stack->a = NULL;
	stack->b = NULL;
	stack->a_size = 0;
	stack->b_size = 0;
}
