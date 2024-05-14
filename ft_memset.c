/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:10:44 by athonda           #+#    #+#             */
/*   Updated: 2024/05/14 15:50:05 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	if (n == 0)
		return (s);
	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = c;
		i++;
	}
	return (s);
}

#include <stdio.h>
#include <strings.h>

int	main(void)
{
	int		a;
	size_t	n;
	int		i;
	char	str[] = "ThisisString";
	char	*p;

	a = 'A';
	n = 2;
	i = 0;
	printf("%s\n", str);
	p = (char *)ft_memset(str, a, n);

	while (i <= 12)
	{
		printf("%c\n", str[i]);
		i++;
	}
	i = 0;
	while (i <= 12)
	{
		printf("%d\n", p[i]);
		i++;
	}
	return (0);
}
