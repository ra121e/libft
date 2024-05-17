/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:41:49 by athonda           #+#    #+#             */
/*   Updated: 2024/05/17 19:57:40 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strncmp compare two strings the first n bytes.
*/

#include "libft.h"

/*
	s1 is char pointer which to have string
	s2 is also string with char pointer
	n is the limit size to compare s1 and s2.
	i is the index to check each letter, and is incrementing in while
	untill the number reachs limit n or each string reachs terminate
	return the difference of s1 and s2 as integer
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
