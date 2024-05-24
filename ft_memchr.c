/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:10:14 by athonda           #+#    #+#             */
/*   Updated: 2024/05/24 14:31:00 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memchr.c
 * @brief scan memory for a character
*/

#include <stdio.h>

/**
 * @fn void	*ft_memchr(const void *s, int c, size_t n)
 * @brief search for the first occurrence of value in memory area
 * @param[in]	s pointer to the memory area to search
 * @param[in]	c serach letter
 * @param[in]	n bytes to be searched
 * @return pointer to the address of the value, is not NULL
 * @attention No NULL check!!
 * @note cast c as unsigned char because s is casted to undigned already
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char *)c)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
