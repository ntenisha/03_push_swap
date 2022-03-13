/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:03:27 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:03:27 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*buffer;
	size_t		i;

	buffer = s;
	i = 0;
	while (i < n)
	{
		if ((i > 0 && !(unsigned char)buffer[i])
			|| (unsigned char)buffer[i] == (unsigned char)c)
			return ((void *)&buffer[i]);
		i ++;
	}
	return (0);
}
