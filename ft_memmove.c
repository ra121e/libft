/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:40:25 by athonda           #+#    #+#             */
/*   Updated: 2024/05/24 13:37:23 by athonda          ###   ########.fr       */
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
	char		*d;
	const char	*s;
	size_t		i;

	if (dest == NULL || src == NULL || n == 0)
		return (NULL);
	d = (char *)dest;
	s = (const char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(d + (n - 1) - i) = *(s + (n - 1) - i);
			i++;
		}
	}
	return (dest);
}
