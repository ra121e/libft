/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:30:56 by athonda           #+#    #+#             */
/*   Updated: 2024/05/21 15:35:59 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putstr_fd.c
 * @brief
*/

#include "libft.h"

/**
 * @fn void ft_putstr_fd(char *s, int fd)
 * @brief
 * @param[in] s is string
 * @param[in,out] fd is file descriptor
 * @return none
*/


void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i], fd);
		i++;
	}
}
