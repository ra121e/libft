/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:10:14 by athonda           #+#    #+#             */
/*   Updated: 2024/05/15 20:03:37 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*p;

	p = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == c)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "This is a 42 premise";
	char	str2[] = "sjfqoejwjo4351";
	char	c;

	c = 'a';
	printf("%s\n", str);
	printf("%p\n", str);
	printf("%s\n", str2);
	printf("%p\n", str2);
	printf("%p\n", ft_memchr(str, c, 10));
	printf("%p\n", ft_memchr(str, c, 6));
	printf("%p\n", ft_memchr(str2, c, 10));
	return (0);
}