/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irebah <irebah@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:12:33 by irebah            #+#    #+#             */
/*   Updated: 2026/10/16 10:46:43 by irebah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total_size;
	unsigned char	*p;

	if (nmemb && (size > SIZE_MAX / nmemb))
		return (0);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (0);
	p = (unsigned char *)ptr;
	ft_bzero(p, total_size);
	return (ptr);
}
