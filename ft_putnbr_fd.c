/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:36:07 by athonda           #+#    #+#             */
/*   Updated: 2024/05/21 19:50:00 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putnbr_fd.c
 * @brief
*/

#include "libft.h"

/**
 * @fn void ft_putnbr_fd(int n, int fd)
 * @brief
 * @param[in] n is number I want to displya
 * @param[in,out] fd is file descriptor
 * @return none
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483618)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd('0' + (n % 10), fd);
}
