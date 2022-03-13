/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:09:47 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:09:50 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_kol_slov(char *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	*s = ft_change_to_space(s);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i - 1] != c)
			num++;
	}
	return (num);
}

char	*ft_subvnrstr_02(char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s1;
	char	*str;

	if (!s)
		return (NULL);
	len_s1 = ft_strlen2(s);
	if (len_s1 < (start + len))
		len = len_s1 - start;
	if (len_s1 < start)
		len = 0;
	str = (char *) malloc (sizeof (*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_write_words(char **arr, char *str, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		if (start < i)
		{
			arr[j] = ft_subvnrstr_02(&str[start], 0, i - start);
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split2(char *s, char c)
{
	char	**str;
	int		num_w;

	if (!s)
		return (NULL);
	num_w = ft_kol_slov(s, c);
	str = (char **) malloc (sizeof (char *) * (num_w + 1));
	if (!str)
		return (NULL);
	str = ft_write_words(str, s, c);
	return (str);
}
