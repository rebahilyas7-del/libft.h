/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irebah <irebah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:28:26 by irebah            #+#    #+#             */
/*   Updated: 2026/10/22 16:30:07 by irebah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != 0)
		current = current->next;
	current->next = new;
}
