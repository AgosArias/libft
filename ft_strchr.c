/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:51:38 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/07 18:27:03 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
			return (&s[count]);
		count++;
	}
	return (NULL);
}
