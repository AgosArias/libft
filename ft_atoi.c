/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:48:35 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/07 18:10:04 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_returnChar(int num, int sign, char *c, int i)
{
	int		x;

	x = 0;
	if (sign == 1)
	{
		c[x] = '-';
		x++;
	}
	c[i + 2] = NULL;
	c[i + 1] = '\0';
	while (num < 10)
	{
		c[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
}

char	*ft_atoi(int n)
{
	int		num;
	int		i;
	int		sign;
	char	c;

	sign = 0;
	i = 0;
	num = n;
	if (num < 0)
	{
		sign++;
		num = -num;
	}
	while (num < 10)
	{
		num = num / 10;
		i++;
	}
	c = (char *)malloc(sizeof(char) * (i + 2 + sign));
	if (!c == NULL)
		return (NULL);
	ft_returnChar(num, sign, c, i);
	return (c);
}
