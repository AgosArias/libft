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

char    *ft_itoa(int n)
{
    char    *c;
    long        num;
    int        i;
    int        sign;
    int        x;

    x = 0;
    sign = 0;
    i = 0;
    num = (long)n;
    if (num < 0)
    {
        sign++;
        num = -num;

    }
    while (num > 10)
    {
        num /= 10;
        i++;
    }
    c = (char *)malloc(sizeof(char) * (i + 1 + sign));
    if (c == NULL)
        return (NULL);
    if (sign == 1)
	{
        c[0] = '-';
		num = (long) -n;
	}
	else
		num = (long)n;
	    
    c[i +  sign] = '\0';
    while (sign < i)
    {
        c[i + sign] = (num % 10) + '0';
        num = num / 10;
        i--;
    }    
    return (c);
}
int main() {
	int n = -2545745;
  	char *str = ft_itoa(n);
	printf("%s\n",str);
	free(str);
  	return 0;
}
