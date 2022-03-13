/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:56:49 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 18:56:49 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/checker.h"

void	ft_error(void)
{
	ft_putstr("Error\n");
	exit(1);
}

void	ft_action_processing2(char *line, t_ab *stack)
{
	if (ft_strcmp(line, "ra") == 0)
		rotate_check(stack, 'a');
	else if (ft_strcmp(line, "rb") == 0)
		rotate_check(stack, 'b');
	else if (ft_strcmp(line, "rr") == 0)
	{
		rotate_check(stack, 'a');
		rotate_check(stack, 'b');
	}
	else if (ft_strcmp(line, "rra") == 0)
		reverse_rotate_check(stack, 'a');
	else if (ft_strcmp(line, "rrb") == 0)
		reverse_rotate_check(stack, 'b');
	else if (ft_strcmp(line, "rrr") == 0)
	{
		reverse_rotate_check(stack, 'a');
		reverse_rotate_check(stack, 'b');
	}
	else
		ft_error();
}

void	ft_action_processing(char *line, t_ab *stack)
{
	if (ft_strcmp(line, "sa") == 0)
		swap_check(stack, 'a');
	else if (ft_strcmp(line, "sb") == 0)
		swap_check(stack, 'b');
	else if (ft_strcmp(line, "ss") == 0)
	{
		swap_check(stack, 'a');
		swap_check(stack, 'b');
	}
	else if (ft_strcmp(line, "pa") == 0)
		push_check(stack, 'a');
	else if (ft_strcmp(line, "pb") == 0)
		push_check(stack, 'b');
	else if (line[0] == 'r')
		ft_action_processing2(line, stack);
	else
		ft_error();
}

void	ft_read_action(t_ab *stack)
{
	char	*line;

	line = NULL;
	while (get_next_line(0, &line))
	{
		ft_action_processing(line, stack);
		free(line);
		line = NULL;
	}
	if (line)
	{
		free(line);
		line = NULL;
	}
}

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
		ft_read_action(&stack);
		if (!sort_check(&stack.a) && stack.b == NULL)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	exit(EXIT_SUCCESS);
}
