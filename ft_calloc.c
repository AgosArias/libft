/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:48:53 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/05 17:48:58 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *calloc(size_t nmemb, size_t size)
{
    char *matriz;
    int i;

    i = 0;
    matriz = (char **) malloc (sizeof(char) * nmemb + 1);
    while (i < nmemb)
    {
	    matriz[i]= (char *) malloc (sizeof(char) * size + 1);
	    i++;
    }
}
