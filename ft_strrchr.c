/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:50:31 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/05 17:50:32 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *s, int c)
{
	int count;

	count = 0;
	while ( s[count] != '\0')
		count++;
	while (count < 0)
	{
		if (s[count] == c)
			return (&s[count])
		count--;
	}
	return (NULL)
}
