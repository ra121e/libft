/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:45 by athonda           #+#    #+#             */
/*   Updated: 2024/05/17 19:37:48 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <assert.h>
#include "libft.h"



int	main(void)
{
	// ft_strlen test
	char	sla[19] = "length test";

	printf("return value from ft_strlen %ld\n", ft_strlen(sla));
	printf("return value from original strlen %ld\n", strlen(sla));

	// ft_bzero test
	int		bza;
	size_t	bzi;
	char	bzstr[] = "ThisisString";

	bza = 3;
	bzi = 0;
	printf("%s\n", bzstr);
	ft_bzero(bzstr, bza);
	while (bzi <= 12)
	{
		printf("%c\n", bzstr[bzi]);
		bzi++;
	}

	// ft_strncmp test
	int		scn;
	char	scstr1[] = "ABCDEFG";
	char	scstr2[] = "ABCD";

	printf("s1: %s\n", scstr1);
	printf("s2: %s\n", scstr2);
	scn = 2;
	printf("case n = %d\n", scn);
	printf("result of ft_ :%d\n", ft_strncmp(scstr1, scstr2, scn));
	printf("result of original :%d\n", strncmp(scstr1, scstr2, scn));
	scn = 5;
	printf("case n = %d\n", scn);
	printf("result of ft_ :%d\n", ft_strncmp(scstr1, scstr2, scn));
	printf("result of original :%d\n", strncmp(scstr1, scstr2, scn));
	scn = 9;
	printf("case n = %d\n", scn);
	printf("result of ft_ :%d\n", ft_strncmp(scstr1, scstr2, scn));
	printf("result of original :%d\n", strncmp(scstr1, scstr2, scn));
	printf("---------------------------------------------------\n");
	return (0);
}
