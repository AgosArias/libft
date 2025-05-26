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

int ft_atoi(const char *str)
{
	int num;
	int i;

	num = 0;	
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) && num != 0)
		{
			num = str[i] - '0';
			if(i > 0 && str[i-1] == '-')
				num = -num;
		}
		else if(ft_isdigit(str[i]) && num && (num * 10)+ (str[i] - '0') <= INT_MAX && (num * 10)+ (str[i] - '0') >= INT_MIN)
			num = num * 10 + (str[i] - '0');
		else if (num != 0)
			return(num);
		i++;
	}
	return(num);
}