/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:34:18 by athonda           #+#    #+#             */
/*   Updated: 2024/05/15 21:40:20 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			p = (void *)&s[i];
		i++;
	}
	return (p);
}


#include <stdio.h>

int	main(void)
{
	char	str[] = "This is a 42 art";
	char	str2[] = "sjfqoejwjo4351";
	char	c;

	c = 'a';
	printf("%s\n", str);
	printf("%p\n", str);
	printf("%s\n", str2);
	printf("%p\n", str2);
	printf("%p\n", ft_strrchr(str, c));
	printf("%p\n", ft_strrchr(str2, c));
	c = '\0';
	printf("%p\n", ft_strrchr(str, c));
	return (0);
}