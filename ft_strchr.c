/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:09:38 by athonda           #+#    #+#             */
/*   Updated: 2024/05/15 21:24:37 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((void *)&s[i]);
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
	printf("%p\n", ft_strchr(str, c));
	printf("%p\n", ft_strchr(str2, c));
	c = '\0';
	printf("%p\n", ft_strchr(str, c));
	return (0);

}