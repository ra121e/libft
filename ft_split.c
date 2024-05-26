/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:04:04 by athonda           #+#    #+#             */
/*   Updated: 2024/05/26 17:48:08 by athonda          ###   ########.fr       */
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
	- ft_substr to extract string from text returns pointer of the substrings
	- we need array which store each address of the substrings
	- malloc can make memory area based on the size of pointer (8 bytes)
	- malloc returns void pointer to the address of the array
	- Points. 1)count word 2)Preparing array 3)extract strings with free
	- 1)"::42::singapore::sutudent:honda" word_count++ happens after delimitere
	- 2)malloc
	- 3)ignore delimiter in small while loop and substr
	-  repeat this set word_count times
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

void	ft_cleanmem(unsigned int i, char **word)
{
	while (i > 0)
	{
		free(word[i - 1]);
		i--;
	}
}

int	ft_setstr(char const *s, char c, size_t nbr_words, char **word)
{
	size_t		i;
	size_t		j;
	size_t		word_len;
	const char	*word_head;

	i = -1;
	j = 0;
	while (++i < nbr_words)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		word_head = &s[j];
		if (ft_strchr(word_head, c) != NULL)
			word_len = ft_strchr(word_head, c) - word_head;
		else
			word_len = ft_strlen(word_head);
		word[i] = ft_substr(s, j, word_len);
		if (!(word[i]))
		{
			ft_cleanmem(i, word);
			return (1);
		}
		j = j + word_len;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char			**word;
	size_t			nbr_words;

	if (s == NULL)
		return (NULL);
	nbr_words = ft_count_words(s, c);
	word = (char **)malloc(sizeof (char *) * (nbr_words + 1));
	if (word == NULL)
		return (NULL);
	if (ft_setstr(s, c, nbr_words, word))
	{
		free(word);
		return (NULL);
	}
	word[nbr_words] = NULL;
	return (word);
}
