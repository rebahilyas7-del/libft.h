/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irebah <irebah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:24:09 by irebah            #+#    #+#             */
/*   Updated: 2026/10/15 16:16:18 by irebah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	pc;

	pc = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (s[i] == pc)
		return ((char *)&s[i]);
	while (i >= 0)
	{
		i--;
		if (s[i] == pc)
			return ((char *)&s[i]);
	}
	return (0);
}
