/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:00:50 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:00:50 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*buffer;
	size_t	i;

	buffer = s;
	i = 0;
	while (i < n)
	{
		buffer[i] = '\0';
		i ++;
	}
}
