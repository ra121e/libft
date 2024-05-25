/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:46:11 by athonda           #+#    #+#             */
/*   Updated: 2024/05/25 10:30:00 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strnstr.c
 * @brief locate a substring in a string
*/

#include "libft.h"

/**
 * @fn char	*ft_strnstr(const char *big, const char *little, size_t len)
 * @brief search for little string in big string within len size
 * @param[in]	big string to be searched in
 * @param[in]	little string to be searched for
 * @param[in]	len max size to scarearch
 * @return	pointer to the first character of the first occurrence
 * @retval	big : little is empty
 * @retval	NULL : not found little
 * @sa ft_strncmp ft_strlen
 * @attention Dont do while nest. lets use previous function
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		len_little;
	size_t		len_big;

	len_little = ft_strlen(little);
	len_big = ft_strlen(big);
	if (little[0] == '\0')
		return ((char *)big);
	if (len_big < len_little || len < len_little)
		return (NULL);
	i = 0;
	while (i < len - 1 - len_little && big[i] != '\0')
	{
		if (ft_strncmp(&big[i], little, len_little) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
