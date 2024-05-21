/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:45 by athonda           #+#    #+#             */
/*   Updated: 2024/05/20 23:37:07 by athonda          ###   ########.fr       */
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

// テストケースを実行する関数
void run_isalnum_test(int c) {
    int result_isalnum = isalnum(c);
    int result_ft_isalnum = ft_isalnum(c);

    printf("Input: '%c' (ASCII: %d)\n", c, c);
    printf("Expected (isalnum): %d\n", result_isalnum);
    printf("Actual (ft_isalnum): %d\n", result_ft_isalnum);

    if (result_isalnum == result_ft_isalnum) {
        printf("Result: PASS\n\n");
    } else {
        printf("Result: FAIL\n\n");
    }
}

void		t_isalnum(void)
{
    printf("Prototyping:\nint isalnum(int c);\n\n");

    // テストケースを定義
    run_isalnum_test('a');  // Alphabetic character
    run_isalnum_test('Z');  // Alphabetic character
    run_isalnum_test('5');  // Numeric character
    run_isalnum_test(' ');  // Space (non-alphanumeric)
    run_isalnum_test('$');  // Special character (non-alphanumeric)
    run_isalnum_test('0');  // Numeric character
    run_isalnum_test('9');  // Numeric character
    run_isalnum_test('A');  // Alphabetic character
    run_isalnum_test('z');  // Alphabetic character
    run_isalnum_test('@');  // Special character (non-alphanumeric)

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

// テストケースを実行する関数
void run_memcpy_test(const char *test_name, const char *src, size_t n) {
    char dest1[100] = {0};
    char dest2[100] = {0};

    // オリジナル関数の結果
    memcpy(dest1, src, n);

    // 自作関数の結果
    ft_memcpy(dest2, src, n);

    // 結果を出力
    printf("Test Case: %s\n", test_name);
    printf("Input src: \"%s\", n: %zu\n", src, n);
    printf("Expected (memcpy): \"%s\"\n", dest1);
    printf("Actual (ft_memcpy): \"%s\"\n", dest2);

    // 結果の比較
    if (memcmp(dest1, dest2, n) == 0) {
        printf("Result: PASS\n\n");
    } else {
        printf("Result: FAIL\n\n");
    }
}

void	t_memcpy(void)
{
    printf("Prototyping:\nvoid *memcpy(void *dest, const void *src, size_t n);\n\n");

    // テストケースを定義
    run_memcpy_test("Test 1", "Hello, World!", 13);
    run_memcpy_test("Test 2", "Test string", 11);
    run_memcpy_test("Test 3", "Another test case", 18);
    run_memcpy_test("Test 4", "Short", 5);
    run_memcpy_test("Test 5", "Edge case: n = 0", 0);
    run_memcpy_test("Test 6", "Edge case: empty string", 0);
    run_memcpy_test("Test 7", "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26);
    run_memcpy_test("Test 8", "1234567890", 10);
    run_memcpy_test("Test 9", "Special characters !@#$%^&*()", 20);
    run_memcpy_test("Test 10", "Final test string for memcpy", 26);

}
// テストケースを実行する関数
void run_memmove_test(const char *test_name, char *dest1, char *dest2, const char *src, size_t n) {
    // オリジナル関数の結果1
    void *orig_ret1 = memmove(dest1, src, n);

    // 自作関数の結果1
    void *ft_ret1 = ft_memmove(dest2, src, n);

    // オリジナル関数の結果2
    void *orig_ret2 = memmove(dest1, src, n);

    // 自作関数の結果2
    void *ft_ret2 = ft_memmove(dest2, src, n);

    // 結果を出力
    printf("Test Case: %s\n", test_name);
    printf("Input src: \"%s\", n: %zu\n", src, n);
    printf("Addresses (dest1, src): %p, %p\n", (void *)dest1, (void *)src);
    printf("Expected (memmove): \"%s\" (Return address: %p)\n", dest1, orig_ret1);
    printf("Actual (ft_memmove): \"%s\" (Return address: %p)\n", dest2, ft_ret1);
    printf("Addresses (dest2, src): %p, %p\n", (void *)dest2, (void *)src);
    printf("Expected (memmove): \"%s\" (Return address: %p)\n", dest1, orig_ret2);
    printf("Actual (ft_memmove): \"%s\" (Return address: %p)\n", dest2, ft_ret2);

    // 結果の比較
    if (memcmp(dest1, dest2, n) == 0) {
        printf("Result: PASS\n\n");
    } else {
        printf("Result: FAIL\n\n");
    }
}
void	t_memmove(void)
{
    printf("Prototyping:\nvoid *memmove(void *dest, const void *src, size_t n);\n\n");

    // テストケースを定義
    char src[] = "ZXYR";
    char dest[] = "123456789";
    char dest2[] = "xx";

    // テストケース1
    run_memmove_test("Test 1", dest, dest2, src, 2);

    // テストケース2
    run_memmove_test("Test 2", dest, dest2, src, 3);

    // テストケース3
    run_memmove_test("Test 3", dest, dest2, src, 4);

    // テストケース4
    run_memmove_test("Test 4", dest, dest2, src, 5);

    // テストケース5
    run_memmove_test("Test 5", dest, dest2, src, 6);

    // テストケース6
    run_memmove_test("Test 6", dest, dest2, src, 7);

    // テストケース7
    run_memmove_test("Test 7", dest, dest2, src, 8);

    // テストケース8
    run_memmove_test("Test 8", dest, dest2, src, 9);

    // テストケース9
    run_memmove_test("Test 9", dest, dest2, src, 10);

    // テストケース10
    run_memmove_test("Test 10", dest, dest2, src, 11);


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

void run_strlcat_test(const char *dst_input, const char *src_input, size_t size) {
    char buffer_strlcat[256];
    char buffer_ft_strlcat[256];

    // strlcat を実行
    strncpy(buffer_strlcat, dst_input, sizeof(buffer_strlcat));
    size_t result_strlcat = strlcat(buffer_strlcat, src_input, size);

    // ft_strlcat を実行
    strncpy(buffer_ft_strlcat, dst_input, sizeof(buffer_ft_strlcat));
    size_t result_ft_strlcat = ft_strlcat(buffer_ft_strlcat, src_input, size);

    // 結果を出力
    printf("Input: dst=\"%s\", src=\"%s\", size=%zu\n", dst_input, src_input, size);
    printf("Expected (strlcat): result=%zu, dst=\"%s\"\n", result_strlcat, buffer_strlcat);
    printf("Actual (ft_strlcat): result=%zu, dst=\"%s\"\n", result_ft_strlcat, buffer_ft_strlcat);

    // 結果の比較
    if (result_strlcat == result_ft_strlcat && strcmp(buffer_strlcat, buffer_ft_strlcat) == 0) {
        printf("Result: PASS\n\n");
    } else {
        printf("Result: FAIL\n\n");
    }
}

void	t_strlcat(void)
{

    printf("Prototyping:\nsize_t strlcat(char *dst, const char *src, size_t size);\n\n");

    // テストケースを定義
    run_strlcat_test("Hello", "World", 11);
    run_strlcat_test("Hello", "World", 10);
    run_strlcat_test("Hello", "World", 5);
    run_strlcat_test("Hello", "World", 6);
    run_strlcat_test("", "World", 6);
    run_strlcat_test("", "World", 1);
    run_strlcat_test("Hello", "", 11);
    run_strlcat_test("Hello", "", 5);
    run_strlcat_test("HelloHelloHello", "World", 20);
    run_strlcat_test("HelloHelloHello", "World", 2);

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


void run_strdup_test(const char *input) {
    char *result_strdup = strdup(input);
    char *result_ft_strdup = ft_strdup(input);

    printf("Input: \"%s\"\n", input);
    printf("Expected (strdup): \"%s\", Address: %p\n", result_strdup, (void *)result_strdup);
    printf("Actual (ft_strdup): \"%s\", Address: %p\n", result_ft_strdup, (void *)result_ft_strdup);

    if (result_strdup != NULL && result_ft_strdup != NULL && strcmp(result_strdup, result_ft_strdup) == 0) {
        printf("Result: PASS\n\n");
    } else {
        printf("Result: FAIL\n\n");
    }

    free(result_strdup);
    free(result_ft_strdup);
}


void	t_strdup(void)
{

    printf("Prototyping:\nchar *strdup(const char *s);\n\n");

    // テストケースを定義
    run_strdup_test("Hello, World!");
    run_strdup_test("Test string with spaces.");
    run_strdup_test("");
    run_strdup_test("A");
    run_strdup_test("Another example string.");
    run_strdup_test("1234567890");
    run_strdup_test("Special characters !@#$%^&*()");
    run_strdup_test("This is a longer string used for testing purposes.");
    run_strdup_test("String with\ttabs and\nnewlines");
    run_strdup_test("End with null character\0hidden text");

}

int	main(void)
{

//t_isdigit();
//t_isalpha();
//t_isalnum();
//t_isascii();
//t_isprint();
//t_strlen();
//t_bzero();
//t_memset();
//t_memcpy();
t_memmove();
//t_memchr();
//t_memcmp();
//t_strchr();
//t_strrchr();
//t_strnstr();
//t_strncmp();
//t_strlcpy();
//t_strlcat();
//t_atoi();
//t_calloc();
//t_strdup();

	return (0);
}