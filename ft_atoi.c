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
    char ant;
    int num;

    num = 0;    
    while (str)
    {
        
        if (ft_isdigit(*str) == 1 && num == 0)
        {
            num = *str - '0';
            if(ant == '-')
                num = -num;
        }
        else if(num != 0 &&  num < 0 && ft_isdigit(*str) == 1  )
            num = num * 10 - (*str - '0');
        else if(num != 0 && ft_isdigit(*str) == 1  )
            num = num * 10 + (*str - '0');
        else if (num != 0)
            return(num);
		else if (*str != '-' && *str != '+')
			return(0);
        ant= *str;
        str++;
    }
    return(num);
}