/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:06:10 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:06:12 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	while (i < ft_strlen(s2))
	{
		s1[i + s1_len] = s2[i];
		i ++;
	}
	s1[i + s1_len] = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buffer;

	if (!s1)
		return (0);
	buffer = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (buffer == NULL)
		return (0);
	ft_strcpy(buffer, s1);
	ft_strcat(buffer, s2);
	return (buffer);
}
