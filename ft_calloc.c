/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:48:53 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/07 18:21:00 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int nmemb, int size)
{
	char	*matriz;

	matriz = (char *)malloc(nmemb * size);
	if (matriz == NULL)
		return (NULL);	
	ft_bzero(matriz, nmemb * size);
	return (matriz);
}
