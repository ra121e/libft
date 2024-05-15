/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:40:25 by athonda           #+#    #+#             */
/*   Updated: 2024/05/15 18:03:41 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(d + (n - 1) - i) = *(s + (n - 1) - i);
			i++;
		}
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	int		i;
	char	strsrc[] = "ZXYR";
	char	strdest[] = "123456789";
	char	strdest2[] = "xx";
	int		intdest[] = {2147483647, 2147483647, 3, 4, 5};
	char	*p;

	printf("src string: %s\n", strsrc);
	printf("src adress: %p\n", strsrc);
	printf("dest string: %s\n", strdest);
	printf("dest adress: %p\n", strdest);
	printf("dest2 string: %s\n", strdest2);
	printf("dest2 adress: %p\n", strdest2);
	i = 0;
	while (i < 5)
	{
		printf("%d ", (intdest[i]));
		i++;
	}
	printf("\n");
	printf("numbers adress: %p\n", intdest);
	ft_memmove(strdest, strsrc, 3);
	printf("dest string: %s\n", strdest);
	ft_memmove(strdest2, strsrc, 3);
	printf("dest2 string: %s\n", strdest2);
	ft_memmove(intdest, strsrc, 3);
	p = (char *)intdest;
	i = 0;
	while (i < 20)
	{
		printf("intdest string: %d\n", *(p + i));
		i++;
	}

	return (0);
}