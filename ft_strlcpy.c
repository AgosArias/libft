/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:51:17 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/05 17:51:22 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    int i;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return i;
}
