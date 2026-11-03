/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irebah <irebah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:42:06 by irebah            #+#    #+#             */
/*   Updated: 2026/10/17 10:49:30 by irebah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*help_function(unsigned int start, size_t s_len)
{
	char	*p;

	if (start >= s_len)
	{
		p = malloc(1);
		if (!p)
			return (0);
		p[0] = '\0';
		return (p);
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*p;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (help_function(start, s_len));
	i = 0;
	if (len > s_len - start)
		len = s_len - start;
	p = malloc(len + 1);
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
