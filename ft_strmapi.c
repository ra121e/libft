/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:31:41 by athonda           #+#    #+#             */
/*   Updated: 2024/05/21 13:00:22 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strmapi.c
 * @brief Create new string by applying function to each letter in a string

*/

#include "libft.h"

/**
 * @fn char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
 * @brief
 * @param[in] s string to be used to generate new string
 * @param[in, out] f function to apply to each character
 * @return the pointer to the new string
 * @retval NULL in case the allocation fails
 * @note main engine is while loop and i incremant to given string
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;
	size_t			len;

	len = ft_strlen(s);
	ptr = (char *)malloc(sizeof (char) * (len + 1));
	if(ptr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
