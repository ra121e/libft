/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:22:48 by athonda           #+#    #+#             */
/*   Updated: 2024/05/21 16:42:20 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putchar_fd.c
 * @brief send character to file descriptor
*/

#include "libft.h"

/**
 * @fn void ft_putchar_fd(char c, int fd)
 * @brief put letter in the number of file descriptor
 * @param[in] c is character
 * @param[in, out] fd is file descriptor
 * @return none
 * @note very very first function.
*/

void ft_putchar_fd(char c, int fd)
{
	write(fd, c, 1);
}