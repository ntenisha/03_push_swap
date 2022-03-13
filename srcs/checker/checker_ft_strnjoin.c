/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_ft_strnjoin.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:08:15 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:08:16 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	char	*buffer;
	size_t	buffer_len;
	size_t	i;

	if (!s1)
		return (0);
	buffer_len = ft_strlen(s2);
	if (n < buffer_len)
		buffer_len = n;
	buffer = (char *) malloc (ft_strlen(s1) + buffer_len + 1);
	if (buffer == NULL)
		return (0);
	i = -1;
	while (s1[++i] != '\0')
		buffer[i] = s1[i];
	buffer_len = i;
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		buffer[i + buffer_len] = s2[i];
		i ++;
	}
	buffer[i + buffer_len] = '\0';
	free((void *)s1);
	return (buffer);
}
