/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:50:25 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/05 17:50:29 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
    int x;
    int y;
    char *w;
    int counter;
    int start;
    int end;

    x = 0;
    counter = 1;
    while (s1[x] != '\0' && counter == 1)
    {
        y = 0;
        counter = 0;
        while ( set[y] != '\0'  && counter != 1)
        {
            if (set[y] == s1[x])
                counter ++;
            y++;
        }
        x++;
    }
    if (s1[x] != '\0')
        start = x - 1;



    while (s1[x] != '\0')
        x++;
    x--;




    while (x != 0 && counter == 1)
    {
        y = 0;
        counter = 0;
        while ( set[y] != '\0'  && counter != 1)
        {
            if (set[y] == s1[x])
                counter ++;
            y++;
        }
        x--;
    }
    if (x != 0)
        end = x + 1;
    x = 0;
    while (start + x != end || s1[start] != '\0')
    {
        w[x] = s1[start + x];
        x++;
    }

}
