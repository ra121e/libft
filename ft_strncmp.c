/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:41:49 by athonda           #+#    #+#             */
/*   Updated: 2024/05/25 20:04:14 by athonda          ###   ########.fr       */
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
 * @return the defference of the last letter of s1 to s2
 * @attention description says the comparison is done using unsigned char!!!!
 * @note 4 conditions to check 1)size 2)\0 3)\0 4)s1 equal s2
 * 	in case using 1) 2) 3) for while condition, needed recheck 1) or 2) 3)
 *	Focus on checking deference, Null terminator and equality can be done at once
 *	so, we can use only 1) size check for while condition
 *	No need to NULL check
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
