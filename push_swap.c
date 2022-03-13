/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:43:27 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:34:11 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	t_ab		stack;

	i = 1;
	create_stack(&stack);
	if (argc > 1)
	{
		if (argc == 2)
			ft_one_arvg(argv[1], &stack);
		else
			ft_two_arvg(argv, &stack);
		if (stack.a_size > 1)
		{
			if (sort_check(&stack.a))
				sort(&stack, stack.a_size + 1);
		}
	}
	exit(EXIT_SUCCESS);
}
