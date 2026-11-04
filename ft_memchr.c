/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irebah <irebah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:53:47 by irebah            #+#    #+#             */
/*   Updated: 2026/10/15 16:17:13 by irebah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ps;

	i = 0;
	ps = (const unsigned char *)s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ps[i] == (unsigned char)c)
			return ((void *)&ps[i]);
		i++;
	}
	return (0);
}
