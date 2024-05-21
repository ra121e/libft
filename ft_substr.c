/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:11:01 by athonda           #+#    #+#             */
/*   Updated: 2024/05/21 13:44:24 by athonda          ###   ########.fr       */
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
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	ptr = (char *)malloc(sizeof (char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len + 1)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}
