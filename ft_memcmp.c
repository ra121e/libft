/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 20:43:46 by athonda           #+#    #+#             */
/*   Updated: 2024/05/15 21:01:19 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const char *str1;
	const char *str2;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "42singapore is located in east";
	char	str2[] = "42singabooooo";
	int		i;

	i = 4;
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d\n", ft_memcmp(str1, str2, i));
	i = 10;
	printf("%d\n", ft_memcmp(str1, str2, i));
	i = 0;
	printf("%d\n", ft_memcmp(str1, str2, i));
	return (0);
}