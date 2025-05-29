/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:51:51 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/29 17:23:14 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		count;
	int		boolean;
	char	**matriz;
	int		i;
	int		len;
	int		j;

	if (s == NULL)
		return (NULL);
	count = 0;
	boolean = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && boolean == 0)
		{
			boolean = 1;
			count++;
		}
		if (s[i] == c && boolean == 1)
			boolean = 0;
		i++;
	}
	matriz = (char **)malloc(sizeof(char *) * (count + 1));
	if (matriz == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i + len] != '\0' && s[i + len] != c)
				len++;
			matriz[count] = (char *)malloc(sizeof(char) * (len + 1));
			if (matriz[count] == NULL)
			{
				while (count > 0)
				{
					free(matriz[count - 1]);
					count--;
				}
				free(matriz);
				return (NULL);
			}
			else
			{
				j = 0;
				while (j < len)
				{
					matriz[count][j] = s[i + j];
					j++;
				}
				matriz[count++][j] = '\0';
			}
			i += len - 1;
		}
		i++;
	}
	matriz[count] = NULL;
	return (matriz);
}
