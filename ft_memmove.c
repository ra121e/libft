/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:40:25 by athonda           #+#    #+#             */
/*   Updated: 2024/05/24 23:21:12 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memmove.c
 * @brief
 * @note copy memry in reverse to avoid overlap
*/

#include <stdio.h>

/**
 * @fn void *memmove(void *dest, const void *src, size_t n)
 * @brief copy some memry area to other from the opposite
 * @param[out] dest memory area to be copied to
 * @param[in] src memory are to be copied
 * @param[in] n how many bytes
 * @return the pointer to start address of dest
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src && n != 0)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		i = -1;
		while (++i < n)
			*(d + i) = *(s + i);
	}
	else
	{
		i = -1;
		while (++i < n)
			*(d + (n - 1) - i) = *(s + (n - 1) - i);
	}
	return (dest);
}
