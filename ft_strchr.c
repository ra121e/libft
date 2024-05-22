/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:09:38 by athonda           #+#    #+#             */
/*   Updated: 2024/05/22 13:33:59 by athonda          ###   ########.fr       */
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
 * @param[in]	c character (1 byte)
 * @return pointer to the matched character or NULL
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
