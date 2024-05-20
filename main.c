/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:45 by athonda           #+#    #+#             */
/*   Updated: 2024/05/20 11:12:53 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <assert.h>
#include <bsd/string.h>
#include "libft.h"

void	t_isdigit(void)
{

}


void	t_isalpha(void)
{

}

void		t_isalnum(void)
{

}

void		t_isascii(void)
{

}
void		t_isprint(void)
{

}

void	t_strlen(void)
{
	// ft_strlen test
	char	sla[19] = "length test";

	printf("return value from ft_strlen %ld\n", ft_strlen(sla));
	printf("return value from original strlen %ld\n", strlen(sla));
}

// テストケースを実行する関数
void run_bzero_test(const char *input_label, unsigned char *input, size_t size) {
    unsigned char buffer_bzero[size];
    unsigned char buffer_ft_bzero[size];

    // bzero を実行
    memcpy(buffer_bzero, input, size);
    bzero(buffer_bzero, size);

    // ft_bzero を実行
    memcpy(buffer_ft_bzero, input, size);
    ft_bzero(buffer_ft_bzero, size);

    // 結果を出力
    printf("Input: %s\n", input_label);
    printf("Expected (bzero): ");
    for (size_t i = 0; i < size; ++i) {
        printf("%02x ", buffer_bzero[i]);
    }
    printf("\n");
    printf("Actual (ft_bzero):   ");
    for (size_t i = 0; i < size; ++i) {
        printf("%02x ", buffer_ft_bzero[i]);
    }
    printf("\n");

    // 結果の比較
    if (memcmp(buffer_bzero, buffer_ft_bzero, size) == 0) {
        printf("Result: PASS\n\n");
    } else {
        printf("Result: FAIL\n\n");
    }
}


void	t_bzero(void)
{

    printf("Prototyping:\nvoid bzero(void *s, size_t n);\n\n");

    unsigned char input1[] = { 'a', 'b', 'c', 'd', 'e' };
    unsigned char input2[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };
    unsigned char input3[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    unsigned char input4[] = { 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q' };
    unsigned char input5[] = { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')' };
    unsigned char input6[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    unsigned char input7[] = { '-', '=', '[', ']', ';', '\'', '\\', ',', '.', '/' };
    unsigned char input8[] = { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p' };
    unsigned char input9[] = { 'm', 'n', 'b', 'v', 'c', 'x', 'z', 'a', 's', 'd' };
    unsigned char input10[] = { '!', '1', 'A', 'b', '2', '@', 'C', 'c', '3', '#' };

    // テストケースを実行
    run_bzero_test("abcde", input1, sizeof(input1));
    run_bzero_test("1234567890", input2, sizeof(input2));
    run_bzero_test("ABCDEFGHIJ", input3, sizeof(input3));
    run_bzero_test("zyxwvutsrq", input4, sizeof(input4));
    run_bzero_test("!@#$%^&*()", input5, sizeof(input5));
    run_bzero_test("0123456789", input6, sizeof(input6));
    run_bzero_test("-=[];',./", input7, sizeof(input7));
    run_bzero_test("qwertyuiop", input8, sizeof(input8));
    run_bzero_test("mnbvcxzasd", input9, sizeof(input9));
    run_bzero_test("!1Ab2@Cc3#", input10, sizeof(input10));

}

void	t_memset(void)
{

}
void	t_memcpy(void)
{

}
void	t_memmove(void)
{

}

void	t_memchr(void)
{

}
void	t_memcmp(void)
{

}
void	t_strchr(void)
{

}

void	t_strrchr(void)
{

}

void	t_strnstr(void)
{

}

void	t_strncmp(void)
{
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

}

void	t_strlcpy(void)
{
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
}

void	t_atoi(void)
{
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
}

void	t_calloc(void)
{

}


int	main(void)
{

//t_isdigit();
//t_isalpha();
//t_isalnum();
//t_isascii();
//t_isprint();
//t_strlen();
t_bzero();
//t_memset();
//t_memcpy();
//t_memmove();
//t_memchr();
//t_memcmp();
//t_strchr();
//t_strrchr();
//t_strnstr();
//t_strncmp();
//t_strlcpy();
//t_atoi();
//t_calloc();

	return (0);
}