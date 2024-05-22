/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:11:01 by athonda           #+#    #+#             */
/*   Updated: 2024/05/22 17:02:35 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_substr.c
 * @brief extract a string from text, then put it into array
*/

#include "libft.h"

/**
 * @fn char *ft_substr(char const *s, unsigned int start, size_t len)
 * @brief just get string by start index and length. No matching test or searching
 * @param[in] s text to which I want to apply this function
 * @param[in] start the index of the first letter of extracting string
 * @param[in] len how many letters we extract
 * @return the pointer of the extracted string, which is the address of allocated by malloc
 * @sa ft_strlcpy, ft_strlen
 * @note
	- case1: string is "" -> NULL
	- case2: start is bigger than string length -> put '\0' in new memory and return the pointer
	- length I want to trim is bigger than the rest of string -> take only the rest
	- put '\0' at the end of ptr, which index is [len] because allocated memory size is len + 1
	- subtracted string is ptr[0], ptr[1],,,ptr[len - 1]
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		ptr = malloc(sizeof (char) * 1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > len_s - start)
		len = len_s - start;
	ptr = (char *)malloc(sizeof (char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, &s[start], len);
	ptr[len + 1] = '\0';
	return (ptr);
}
