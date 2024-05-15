/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 21:46:11 by athonda           #+#    #+#             */
/*   Updated: 2024/05/16 00:30:19 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	void		*p;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((void *)&big[0]);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			p = (void *)&big[i];
			while (i < len && big[i] == little[j] && little[j] != '\0')
			{
				i++;
				j++;
			}
			if (little[j] == '\0')
				return (p);
			else
				return (NULL);
		}
		i++;
	}
	return (NULL);
}


#include <stdio.h>

int	main(void)
{
	char	str[] = "This is a 42 premise";
	char	str2[] = "";
	char	str3[] = "is";
	char	str4[] = "pren";
	size_t	len;

	printf("%s\n", str);
	printf("%p\n", str);
	printf("NULL %s\n", str2);
	printf("Correct case: %s\n", str3);
	printf("Incorrect case: %s\n", str4);
	printf("\n");
	printf("-----------------------------------------\n");
	len = 20;
	printf("case of len %ld\n", len);
	printf("%s\n", str);
	printf("%p\n", ft_strnstr(str, str2, len));
	printf("%p\n", ft_strnstr(str, str3, len));
	printf("%p\n", ft_strnstr(str, str4, len));
	printf("\n");
	printf("-----------------------------------------\n");
	len = 10;
	printf("case of len %ld\n", len);
	printf("%p\n", ft_strnstr(str, str2, len));
	printf("%p\n", ft_strnstr(str, str3, len));
	printf("%p\n", ft_strnstr(str, str4, len));
	printf("\n");
	printf("-----------------------------------------\n");
	len = 2;
	printf("case of len %ld\n", len);
	printf("%p\n", ft_strnstr(str, str2, len));
	printf("%p\n", ft_strnstr(str, str3, len));
	printf("%p\n", ft_strnstr(str, str4, len));

	return (0);
}