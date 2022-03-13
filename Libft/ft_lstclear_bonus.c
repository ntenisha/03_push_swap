/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:02:35 by ntenisha          #+#    #+#             */
/*   Updated: 2022/03/13 19:02:38 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*holder;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		holder = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(holder, del);
	}
	*lst = NULL;
}
