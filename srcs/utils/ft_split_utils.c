/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:09:40 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:09:41 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

size_t	ft_strlen2(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

char	ft_change_to_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isprint (str[i]))
			str[i] = ' ';
		i++;
	}
	return (*str);
}

void	ft_err_ex(void)
{
	write(2, "Error\n", 6);
	exit (0);
}
