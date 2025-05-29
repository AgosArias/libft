/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:51:38 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/29 16:40:58 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		count;
	char	*d;

	d = (char *)s;
	count = 0;
	while (d[count])
	{
		if (d[count] == (char)c)
			return (&d[count]);
		count++;
	}
	if ((char)c == '\0')
		return (&d[count]);
	return (NULL);
}
