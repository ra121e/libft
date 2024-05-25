/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:34:18 by athonda           #+#    #+#             */
/*   Updated: 2024/05/25 15:51:51 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strrchr.c
 * @brief locate character in string
*/

#include "libft.h"

/**
 * @fn char	*ft_strrchr(const char *s, int c)
 * @brief find the last occurrence of the character
 * @param[in]	s string to be searched in
 * @param[in]	c character to be found
 * @return pointer to the occuerrence address
 * @attention in case the character to search with is '\0'
*/


char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;
	p = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			p = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (p);
}
