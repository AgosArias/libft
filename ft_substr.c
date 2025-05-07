/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:50:15 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/07 18:15:58 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	w;
	int		x;
	int		y;

	x = 0;
	w = (char *)malloc(sizeof(char) * (len + 1));
	if (w == NULL)
		return (NULL);
	while (s[x] != start)
		x++;
	y = x;
	while (s[x] < (y + len) || s[x] != '\0')
	{
		w[x - y] = s[x];
		x++;
	}
	w[x] = '\0';
	return (w);
}