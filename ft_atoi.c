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

#include "libft.h"

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

int ft_atoi(const char *str)
{
	int num;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (num == NULL && ft_isdigit(str[i]) == 0)
		{
			if (condition)
			{
				/* code */
			}
			
			num = str[i] - '0';
		}
		else if (num != NULL && ft_isdigit(str[i]) == 0)
		{

		}
		i++;
		
	}
	
}
