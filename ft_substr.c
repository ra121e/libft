/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:11:01 by athonda           #+#    #+#             */
/*   Updated: 2024/05/29 10:54:26 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_substr.c
 * @brief extract a string from text, then put it into array
*/

#include "libft.h"

/**
 * @fn char *ft_substr(char const *s, unsigned int start, size_t len)
 * @brief get string by start index and length. No matching no searching
 * @param[in] s text to which I want to apply this function
 * @param[in] start the index of the first letter of extracting string
 * @param[in] len how many letters we extract
 * @return pointer to the extracted string, which is allocated by malloc
 * @retval NULL: case1: string is ""
 * @retval pointer to '\0': case2: start bigger than string len
 * @sa ft_memcpy, ft_strlen
 * @note 1)basic 2) start exceed string 3)length from start exceed string
	- 2) except condition. make 1 size memory area and put null terminator
	- 3) adjust the length to the rest of string -> take only the rest
	- 1) make destination area by malloc and copy strings by memcpy
	- put '\0' at the end of ptr, index is [len] because mem size is len + 1
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
	ptr[len] = '\0';
	return (ptr);
}
