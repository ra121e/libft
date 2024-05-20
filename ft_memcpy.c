/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:33:18 by athonda           #+#    #+#             */
/*   Updated: 2024/05/20 20:33:55 by athonda          ###   ########.fr       */
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
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}
