/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:52:22 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/08 16:38:21 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	void	*head;

	if (!s)
		return (NULL);
	head = s;
	i = 0;
	while (s && i < n)
	{
		s = &c;
		s++;
		i++;
	}
	s = 0;
	return (head);
}