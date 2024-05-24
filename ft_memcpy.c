/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:33:18 by athonda           #+#    #+#             */
/*   Updated: 2024/05/24 23:40:14 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memcpy.c
 * @brief copy from memry to memry
*/

#include <stdio.h>

/**
 * @fn void *ft_memcpy(void *dest, const void *src, size_t n)
 * @brief defferent to ft_strcpy, memcpy can copy anything
 * @param[in, out] dest cast to char type to step by 1 byte
 * @param[in] src cast to const char type to step by 1 byte
 * @param[in] n total size of copy
 * @note To receive any type of pointer, parameter is void type
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src && n != 0)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}
