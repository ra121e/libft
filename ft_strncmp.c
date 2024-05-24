/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:41:49 by athonda           #+#    #+#             */
/*   Updated: 2024/05/24 14:54:52 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strncmp.c
 * @brief compare two strings the first n bytes.
*/

#include "libft.h"

/**
 * @fn int	ft_strncmp(const char *s1, const char *s2, size_t n)
 * @param[in]	s1 is char pointer which to have string
 * @param[in]	s2 is also string with char pointer
 * @param[in]	n is the limit size to compare s1 and s2.
 * @attention description says the comparison is done using unsigned char!!!!
 * @note i is the index to check each letter, and is incrementing in while
	untill the number reachs limit n or each string reachs terminate
	return the difference of s1 and s2 as integer
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
