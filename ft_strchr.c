/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:09:38 by athonda           #+#    #+#             */
/*   Updated: 2024/05/25 12:52:38 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strchr.c
 * @brief to locate character in string
*/

#include "libft.h"

/**
 * @fn char	*ft_strchr(const char *s, int c)
 * @brief to find a first letter in the text
 * @param[in]	s string to be checked in
 * @param[in]	c character (1 byte) but type int...
 * @return pointer to the matched character or NULL by char pointer type
 * @retval pointer : match letter
 * @retval NULL : not found
 * @retval pointer : NULL terminator
 * @attention to compare each letters type should be casted
 * @note The terminating null byte is considered part of the string!!
	in case of '\0', we have to check after while check
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
