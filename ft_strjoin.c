/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 08:04:18 by athonda           #+#    #+#             */
/*   Updated: 2024/05/23 08:51:47 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strjoin.c
 * @brief Concatenate two strings
*/

#include "libft.h"

/**
 * @fn char	*ft_strjoin(char const *s1, chat const *s2)
 * @brief create new string appending the second to the fist string
 * @param[in]	s1	first string
 * @param[in]	s2	second string
 * @return	pointer to newly created string
 * @sa ft_strlen ft_memcpy malloc
 * @note
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = (char *)malloc(sizeof (char) * (len_s1 + len_s2 + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, len_s1);
	ft_memcpy(ptr + len_s1, s2, len_s2);
	ptr[len_s1 + len_s2] = '\0';
	return (ptr);
}