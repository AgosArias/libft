/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:51:29 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/05 19:26:48 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char 	*w;
	int x;
	int y;
	int a;
	int b;

	b = 0;
	a = 0;
	x = 0;
	y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	w = (char *)malloc(sizeof(char) * (x + y + 1));
	while (a != x)
	{
		w[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		w[a + b] = s2[b];
		b++;
	}
	return (w)
}

int main(void)
{
	char *c;
	char s1[] = "hola";
	char s2[] = " mundo";
	c = ft_strjoin(s1, s2);
	printf("%s", c);
	free(c);
	return (0);
}