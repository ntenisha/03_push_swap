/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils_02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:10:03 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:10:05 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	*ft_free(void *ptr)
{
	free(ptr);
	return (NULL);
}

void	*ft_free_2d(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
	return (NULL);
}

void	ft_quit_checker(int status, t_ab *stack)
{
	if (status == 2)
	{
		ft_putendl_fd("Error", STDERR_FILENO);
		status = EXIT_FAILURE;
	}
	ft_free(stack->a);
	ft_free(stack->b);
	exit(status);
}
