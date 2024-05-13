/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:46:03 by athonda           #+#    #+#             */
/*   Updated: 2024/05/14 07:46:05 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[20] = "length test";

	printf("return value from ft_strlen %ld\n", ft_strlen(a));
	printf("return value from original strlen %ld\n", strlen(a));
	return (0);
}