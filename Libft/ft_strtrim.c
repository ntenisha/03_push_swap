/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:07:08 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:07:26 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_str_has_char(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_str_has_char(set, s1[start]))
		start ++;
	while (ft_str_has_char(set, s1[end]))
		end --;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
