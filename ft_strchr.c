/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irebah <irebah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:41:51 by irebah            #+#    #+#             */
/*   Updated: 2026/10/15 15:38:48 by irebah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	pc;

	pc = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == pc)
			return ((char *)s);
		s++;
	}
	if (*s == pc)
		return ((char *)s);
	return (0);
}
