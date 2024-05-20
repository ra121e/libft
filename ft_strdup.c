/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:23:05 by athonda           #+#    #+#             */
/*   Updated: 2024/05/20 16:51:42 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strdup.c
 * @brief duplicate a string
*/

#include "libft.h"

/**
 * @fn char *ft_strdup(const char *s)
 * @brief No need to prepare destination area. We make it!
 * @param[in] s string what you want to copy
 * @return the pointer to the copied string
*/

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;
	int		i;

	len = ft_strlen(s);
	ptr = (char *)malloc(sizeof (char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}