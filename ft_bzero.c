/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:31:59 by athonda           #+#    #+#             */
/*   Updated: 2024/05/20 10:07:29 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_bzero.c
 * @brief Erase data by writing zero 0
*/

#include "libft.h"

/**
 * @fn void ft_bzero(void *s, size_t n)
 * @brief Set all bytes in specifies memory to zero
 * @param[out] s Starting address you want to zero out
 * @param[in] n Number of byts to be set to zero
 * @return none
 * @note void pointer s is casted to char to move by 1 byte
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	if (n == 0)
		return ;
	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = '\0';
		i++;
	}
}
