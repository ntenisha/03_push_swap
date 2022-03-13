/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:06:37 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:06:39 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buffer;
	unsigned int	i;

	if (!s)
		return (0);
	buffer = (char *) malloc (ft_strlen(s) + 1);
	if (buffer == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		buffer[i] = f(i, s[i]);
		i ++;
	}
	buffer[i] = '\0';
	return (buffer);
}
