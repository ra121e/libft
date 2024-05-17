/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:00:03 by athonda           #+#    #+#             */
/*   Updated: 2024/05/17 20:37:03 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_strlcpy is copying string in given size
*/

#include "libft.h"

/*
	in main(), there are 2 arrays prepared as strings
	src has address of source string
	dst is the address of destination for receiving string
	copy untill 1 less than the size for NULL terminator
	to return source length, use ft_strlen
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
