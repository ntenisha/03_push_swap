/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:03:52 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:03:52 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		source = src;
		dest = dst;
		while (len--)
			*dest++ = *source++;
	}
	else
	{
		source = src + len - 1;
		dest = dst + len - 1;
		while (len--)
			*dest-- = *source--;
	}
	return (dst);
}
