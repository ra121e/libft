/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:58:35 by athonda           #+#    #+#             */
/*   Updated: 2024/05/26 18:56:00 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strtrim.c
 * @brief To revome characters from the string
*/

#include "libft.h"

/**
 * @fn char	*ft_strtrim(char const *s1, char const *set)
 * @brief To delete the "set" word from the "s1" text
 * @param[in]	s1	string to be trimed
 * @param[in]	set	string to trim
 * @return the address of the trimmed string
 * @note There are two section
	- copy characters one by one into new area during no matching
	- copy characters into temp area during matching
	- str join new area and temp area if unmatching
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		len_s1;
	int		i;
	int		j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	{
		i++;
	}
	j = 0;
	while (s1[len_s1 - 1 - j] != '\0' && ft_strchr(set, s1[len_s1 - 1 - j]))
	{
		j++;
	}
	ptr = ft_substr(s1, i, len_s1 - i - j);
	return (ptr);
}
