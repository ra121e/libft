/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:05:54 by athonda           #+#    #+#             */
/*   Updated: 2024/05/25 18:43:16 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcat.c
 * @brief concatenat 2 strings and put null terminate
 * @note XXX\0 + yyyy\0 -> XXXYYYY\0
*/

#include "libft.h"

/**
 * @fn size_t ft_strlcat(char *dst, const char *src, size_t size)
 * @brief Appends 2st string to the end of 1st string
 * @param[in, out] dst destination string will be appended
 * @param[in] src source string to be apprended
 * @param[in] size total size of dst including NULL terminator
 * @return total of dst plus src
 * @retval total of size and src in case dst is larger than size
 * @attention strlcat needed to include as bsd/string.h for libbsd
 * @note	because we want to put the NUL terminate
 * 			size should be dest + src + 1
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (dst_len + i < size - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
