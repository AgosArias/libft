/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:50:38 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/07 18:33:04 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int		x;
	int		y;
	char	*puntero;

	x = 0;
	y = 0;
	while (haystack[x] != '\0' && y < len)
	{
		if (haystack[x] == needle[y] && y == 0)
		{
			puntero = &haystack[x];
			y++;
		}
		else
		{
			y = 0;
		}
	}
	if (y == len)
		return (puntero);
	return (NULL);
}
