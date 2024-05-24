/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:10:44 by athonda           #+#    #+#             */
/*   Updated: 2024/05/24 12:29:36 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memset.c
 * @brief fill memory with a constant bytes
*/

#include "libft.h"

/**
 * @fn void	*ft_memset(void *s, int c, size_t n)
 * @brief set the value in some memory area
 * @param[in]	s pointer to the memory area to be filled
 * @param[in]	c the value to be set
 * @param[in]	n number of bytes to be set
 * @note no need to check arguments
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = c;
		i++;
	}
	return (s);
}
