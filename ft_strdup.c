/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:51:34 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/05 17:51:34 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	while (src[i] == '\0')
		i++;
	c = (char *) malloc (i * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		c[i] = src[i];
		i++;
	}
	c[i] = src[i];
	return (c);
}
