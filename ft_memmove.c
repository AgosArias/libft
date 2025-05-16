/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:49:55 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/07 18:24:08 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d;
	unsigned char *s;

	if (!dest && !src)
        return (NULL);
	d = (unsigned char*) dest;
	s = (unsigned char*) src;
	i = 0;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

