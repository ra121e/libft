/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:23:50 by athonda           #+#    #+#             */
/*   Updated: 2024/05/21 16:29:24 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putendl_fd.c
 * @brief outputs string followed by a newline
*/

#include "libft.h"

/**
 * @fn void ft_putendl_fd(char *s, int fd)
 * @brief just combination ft_putstr_fd + \n ??
 * @param[in] s is string
 * @param[in,out] fd is file descriptor
 * @return none
*/

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}