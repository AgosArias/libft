/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:49:35 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/07 18:22:29 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lenght_int(int n)
{
    int i;

    i = 1;
    while (n >= 10)
    {
        n /= 10;
        i++;
    }
    return(i);
}

char    *ft_itoa(int n)
{
    char    *c;
    long        num;
    int        i;
    int        sign;

    if( n == -2147483648)
    {
        c = (char *)malloc(sizeof(char) * (12));
        c[0] = '-';
        i = 11;
        while (0 < i)
        {
            c[i + 1] = (num % 10) + '0';
            num = num / 10;
            i--;
        }    
        return(c);
    }

    sign = 0;
    num = n;
    if (num < 0)
    {
        sign++;
        num = -num;
    }
    i = ft_lenght_int(num);
    c = (char *)malloc(sizeof(char) * (i + 1 + sign));
    if (c == NULL)
        return (NULL);
    if (sign == 1)
        c[0] = '-';  
    c[i-- +  sign] = '\0';
    while (sign - 2 < i)
    {
        c[i + sign] = (num % 10) + '0';
        num = num / 10;
        i--;
    }    
    return (c);
}
