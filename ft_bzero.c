/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:31:59 by athonda           #+#    #+#             */
/*   Updated: 2024/05/14 14:22:10 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	if (n == 0)
		return ;
	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = '\0';
		i++;
	}
}

#include <stdio.h>
#include <strings.h>

int	main(void)
{
	int		a;
	size_t	i;
	char	str[] = "ThisisString";

	a = 0;
	i = 0;
	printf("%s\n", str);
	ft_bzero(str, i);
	while (a <= 12)
	{
		printf("%c\n", str[a]);
		a++;
	}
	return (0);
}
