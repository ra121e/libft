/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:05:54 by athonda           #+#    #+#             */
/*   Updated: 2024/05/20 14:01:57 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	concatenat 2 strings and put null terminate
	XXX\0 + yyyy\0 -> XXXYYYY\0
*/

#include "libft.h"

/*
	strlcat needed to include as bsd/string.h for libbsd
	count index of 1st string untill the end terminate
	copy from 2nd string to the index location untill size - 1
	because we want to put the NUL terminate
	return the total length of 2 strings basically
	but its size + 2nd in case size is smaller than 1st one
*/


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	while (i + dst_len - 1 < size && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (size > dst_len)
	{
		dst[dst_len + i] = '\0';
		return (dst_len + ft_strlen(src));
	}
	else
		return (size + ft_strlen(src));
}