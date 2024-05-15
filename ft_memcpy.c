/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 13:33:18 by athonda           #+#    #+#             */
/*   Updated: 2024/05/15 14:21:59 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dest);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		i;
	char	strsrc[] = "AAAA";
	char	strdest[] = "123456789";
	char	strdest2[] = "xx";
	int		intdest[] = {1, 2, 3, 4, 5};

	printf("src string: %s\n", strsrc);
	printf("dest string: %s\n", strdest);
	printf("dest2 string: %s\n", strdest2);
	i = 0;
	while (i < 5)
	{
		printf("%d ", (intdest[i]));
		i++;
	}
	printf("\n");
	ft_memcpy(strdest, strsrc, 3);
	printf("dest string: %s\n", strdest);
	ft_memcpy(strdest2, strsrc, 3);
	printf("dest2 string: %s\n", strdest2);

	return (0);
}