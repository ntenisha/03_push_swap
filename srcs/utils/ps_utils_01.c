/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_01.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:09:55 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:51:36 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

int	double_check(t_node **head, long int n, int size)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *head;
	while (i < size)
	{
		if (tmp->value == n)
			return (1);
		tmp = tmp->next;
		i++;
	}
	if (n > 2147483647 || n < -2147483648)
		return (1);
	return (0);
}

int	sort_check(t_node **head)
{
	t_node	*tmp;
	t_node	*last;

	tmp = *head;
	last = (*head)->prev;
	if (!(*head))
		return (-1);
	while (tmp != last)
	{
		if (tmp->value > tmp->next->value)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	ft_one_arvg(char *str1, t_ab *stack)
{
	long int	n;
	t_node		*tmp;
	int			j;
	char		**str2;

	j = 0;
	if (ft_kol_slov (str1, ' ') > 0)
	{
		str2 = ft_split2(str1, ' ');
		while (str2[j])
		{
			n = ft_atoi2(str2[j]);
			tmp = create(n);
			if (!tmp || double_check(&stack->a, n, stack->a_size))
				ft_err_ex();
			add_ellement_end(&stack->a, tmp);
			stack->a_size = ++j;
		}
	}
	else
		exit(EXIT_SUCCESS);
	str2 = ft_free_2d(str2);
}

void	ft_two_arvg(char **str1, t_ab *stack)
{
	long int	n;
	t_node		*tmp;
	int			i;

	i = 1;
	while (str1[i])
	{
		n = ft_atoi2(str1[i]);
		tmp = create(n);
		if (!tmp || double_check(&stack->a, n, stack->a_size))
			ft_err_ex();
		add_ellement_end(&stack->a, tmp);
		stack->a_size = i++;
	}
}
