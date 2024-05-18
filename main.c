/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:45 by athonda           #+#    #+#             */
/*   Updated: 2024/05/18 20:43:27 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <bsd/string.h>
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

	// ft_atoi test

	char	atoistr[] = "    +42";
	char	atoistr2[] = "    -42";
	char	atoistr3[] = "  ---42";
	char	atoistr4[] = "  +++42";
	char	atoistr5[] = "  feae435352";
	char	atoistr6[] = "  2425dfafa";
	char	atoistr7[] = "";
	char	atoistr8[] = "21474836489876";
	char	atoistr9[] ="-21474836498768";

	printf("ft_atoi--------------------------------------------\n");
	printf("ft_ get %s return %d\n", atoistr, ft_atoi(atoistr));
	printf("origina get %s return %d\n", atoistr, atoi(atoistr));
	printf("ft_ get %s return %d\n", atoistr2, ft_atoi(atoistr2));
	printf("origina get %s return %d\n", atoistr2, atoi(atoistr2));
	printf("ft_ get %s return %d\n", atoistr3, ft_atoi(atoistr3));
	printf("origina get %s return %d\n", atoistr3, atoi(atoistr3));
	printf("ft_ get %s return %d\n", atoistr4, ft_atoi(atoistr4));
	printf("origina get %s return %d\n", atoistr4, atoi(atoistr4));
	printf("ft_ get %s return %d\n", atoistr5, ft_atoi(atoistr5));
	printf("origina get %s return %d\n", atoistr5, atoi(atoistr5));
	printf("ft_ get %s return %d\n", atoistr6, ft_atoi(atoistr6));
	printf("origina get %s return %d\n", atoistr6, atoi(atoistr6));
	printf("ft_ get %s return %d\n", atoistr7, ft_atoi(atoistr7));
	printf("origina get %s return %d\n", atoistr7, atoi(atoistr7));
	printf("ft_ get %s return %d\n", atoistr8, ft_atoi(atoistr8));
	printf("origina get %s return %d\n", atoistr8, atoi(atoistr8));
	printf("ft_ get %s return %d\n", atoistr9, ft_atoi(atoistr9));
	printf("origina get %s return %d\n", atoistr9, atoi(atoistr9));
	printf("---------------------------------------------------\n");

	// ft_strlcpy test
	size_t	slcn;
	char	slcstr1[] = "ABCDEFG";
	char	slcstr2[] = "ABCD";

	printf("dst: %s\n", slcstr1);
	printf("src: %s\n", slcstr2);
	slcn = 2;
	printf("case n = %zu\n", slcn);
	printf("result of ft_ :%zu\n", ft_strlcpy(slcstr1, slcstr2, slcn));
	printf("dst after ft_: %s\n", slcstr1);
	printf("result of original :%zu\n", strlcpy(slcstr1, slcstr2, slcn));
	slcn = 5;
	printf("case n = %zu\n", slcn);
	printf("result of ft_ :%zu\n", ft_strlcpy(slcstr1, slcstr2, slcn));
	printf("result of original :%zu\n", strlcpy(slcstr1, slcstr2, slcn));
	slcn = 9;
	printf("case n = %zu\n", slcn);
	printf("result of ft_ :%zu\n", ft_strlcpy(slcstr1, slcstr2, slcn));
	printf("result of original :%zu\n", strlcpy(slcstr1, slcstr2, slcn));
	printf("---------------------------------------------------\n");
	return (0);
}
