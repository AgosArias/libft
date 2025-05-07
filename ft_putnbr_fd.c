/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:52:14 by aarias-d          #+#    #+#             */
/*   Updated: 2025/05/07 18:26:17 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putnbr_fd(int n, int fd)
{
    char c;

    if ( n < 0)
    {
        ft_putchar_fd('-',fd);
        n = -n;
    }
    if ( n < 10)
    {
        c = n + '0';
        ft_putchar_fd(c,fd);
    }
    else
    {
        c = n % 10 + '0';
        ft_putnbr_fd(n / 10,fd);
        ft_putchar_fd(c,fd)
    }
}