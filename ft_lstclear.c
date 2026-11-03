/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irebah <irebah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:26:20 by irebah            #+#    #+#             */
/*   Updated: 2026/10/29 14:28:45 by irebah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*helper;

	if (!lst || !del)
		return ;
	while (*lst != 0)
	{
		helper = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = helper;
	}
}
