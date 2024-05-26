/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:04:04 by athonda           #+#    #+#             */
/*   Updated: 2024/05/26 15:38:05 by athonda          ###   ########.fr       */
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



size_t	ft_count_words(char const *str, char delimiter)
{
	size_t	i;
	size_t	nbr_words;

	nbr_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == delimiter && str[i] != '\0')
			i++;
		if (str[i] != delimiter && str[i] != '\0')
		{
			nbr_words++;
			while (str[i] != delimiter && str[i] != '\0')
				i++;
		}
	}
	return (nbr_words);
}

void	ft_cleanmem(unsigned int j, char **word)
{
	while (j > 0)
	{
		free(word[j - 1]);
		j--;
	}
	free(word);
}

char	**ft_split(char const *s, char c)
{
	char			**word;
	size_t			i;
	unsigned int	j;
	const char		*word_head;
	size_t			word_len;
	size_t			nbr_words;

	if (s == NULL)
		return (NULL);
	nbr_words = ft_count_words(s, c);
	word = (char **)malloc(sizeof (char *) * (nbr_words + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < nbr_words)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		word_head = &s[j];
		if (ft_strchr(word_head, c) != NULL)
			word_len = ft_strchr(word_head, c) - word_head;
		else
			word_len = ft_strlen(word_head);
		word[i] = ft_substr(s, j, word_len);
		if (word[i] == NULL)
		{
			ft_cleanmem(j, word);
			return (NULL);
		}
		j = j + word_len;
		i++;
	}
	word[i] = NULL;
	return (word);
}
