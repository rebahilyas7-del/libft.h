/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irebah <irebah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:34:52 by irebah            #+#    #+#             */
/*   Updated: 2026/10/29 14:25:34 by irebah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const unsigned char	*p_src;
	unsigned char		*p_dest;
	size_t				i;

	if ((len == 0) || (dest == src))
		return (dest);
	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	if (p_dest > p_src)
	{
		while (len > 0)
		{
			len--;
			p_dest[len] = p_src[len];
		}
		return (dest);
	}
	i = 0;
	while (i < len)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
