/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:50:15 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/05 17:50:55 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char w;
    int x;
    int y;

    x = 0;
    w = malloc;
    while (s[i] != start)
        i++;
    y = i;
    while (s[i] < (y + len) || s[i] != '\0')
    {
        w[i-y] = s[i];
        i++;
    }
    w[i] = '\0'
    return (w)
}