/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:49:46 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/07 18:23:43 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if ((!s1 && !s2) || n == 0)
		return (0);
	d = (unsigned char *) s1;
	s = (unsigned char *) s2;
	i = 0;
	while (d[i] == s[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (d[i] - s[i]);
}
