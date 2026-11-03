/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irebah <irebah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 18:40:39 by irebah            #+#    #+#             */
/*   Updated: 2026/10/19 18:43:48 by irebah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*p;

	nb = n;
	len = ft_nbrlen(nb);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (nb < 0)
	{
		p[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		p[0] = '0';
	while (nb > 0)
	{
		p[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (p);
}
