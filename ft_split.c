/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:04:04 by athonda           #+#    #+#             */
/*   Updated: 2024/05/25 22:14:20 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/**
 * @file ft_split.c
 * @brief split strins by delimiter
*/

#include "libft.h"

/**
 * @fn char	**ft_split(char const *s, char c)
 * @brief Cut text with specified letter and generate array of substrings
 * @param[in]	s string to be split
 * @param[in]	c character to split s by
 * @return	double pointer to first array which are storing substrings
 * @sa ft_substr ft_strlen ft_memcpy
 * @note ptr[0], ptr[1] are address, ptr[0][1], ptr[0][1]... are each letter
	- to use ft_substr to extract string from text, it returns pointer of the substrings
	- we need array which store each address of the substrings
	- then, malloc can make memory area for the array based on the size of pointer (8 bytes)
	- malloc returns void pointer to the address of array which keeps adress of substrings
	- There are 3 parts. 1)count word 2)Preparing array for address and store 3)extract strings
	- 1)"::::42Singapore:student:::honda:::libft::::::" word_count++ happens after delimiteri
	- 2)malloc
	- 3)ignore delimiter in small while loop and substr, repeat this set word_count times
*/

char	**ft_split(char const *s, char c)
{
	char			**word;
	size_t			i;
	unsigned int	j;
	size_t			word_count;
	const char		*word_head;
	size_t			word_len;

	if (s == NULL)
		return (NULL);
	word_count = 0;
	if (s[0] != c && s[0] != '\0')
		word_count = 1;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			word_count++;
		i++;
	}
	word = (char **)malloc(sizeof (char *) * (word_count + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		word_head = &s[j];
		if (ft_strchr(word_head, c) != NULL)
			word_len = ft_strchr(word_head, c) - word_head;
		else
			word_len = ft_strlen(word_head);
		word[i] = ft_substr(s, j, word_len);
		j = j + word_len;
		i++;
	}
	word[i] = NULL;
	return (word);
}
