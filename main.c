/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:47:45 by athonda           #+#    #+#             */
/*   Updated: 2024/05/21 19:53:11 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <assert.h>
#include <bsd/string.h>

// for file operations
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "libft.h"

// Helper function to clear the screen
void clearScreen() {
	system("clear||cls");
}

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

void	t_memmove(void)
{

    clearScreen();
    printf("Function: void *ft_memmove(void *dest, const void *src, size_t n)\n");
    printf("Description: The ft_memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap.\n");
    printf("Input: A pointer to the destination memory area, a pointer to the source memory area, and the number of bytes to copy\n");
    printf("Output: A pointer to the destination memory area dest\n\n");

    // Test case 1: overlapping memory areas
    char dst1[10] = "abcdefgh";
    printf("Test Case 1: dest = \"abcdefgh\", src = dest + 2, n = 4\n");
    printf("Before: dest = \"%s\"\n", dst1);
    ft_memmove(dst1, dst1 + 2, 4);
    printf("After: dest = \"%s\"\n\n", dst1);

    // Test case 2: non-overlapping memory areas
    int dst2[5] = {1, 2, 3, 4, 5};
    printf("Test Case 2: dest = {1, 2, 3, 4, 5}, src = dest + 1, n = 3\n");
    printf("Before: dest = ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dst2[i]);
    }
    printf("\n");
    ft_memmove(dst2, dst2 + 1, 3 * sizeof(int));
    printf("After: dest = ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dst2[i]);
    }
    printf("\n\n");

    // Test case 3: NULL pointers
    printf("Test Case 3: NULL pointers\n");
    char *nullPtr = NULL;
    printf("Attempting to move 0 bytes from NULL to NULL...\n");
    void *result = ft_memmove(nullPtr, nullPtr, 0);
    if (result == NULL) {
        printf("After: Result is NULL as expected.\n\n");
    } else {
        printf("After: Unexpected non-NULL result!\n\n");
    }

    // Test case 4: custom lengths
    printf("Enter the length of the memory areas: ");
    size_t n;
    scanf("%zu", &n);
    char customDst[100];
    char customSrc[100];
    printf("Enter the source string: ");
    scanf(" %99[^\n]", customSrc);
    printf("Enter the destination string: ");
    scanf(" %99[^\n]", customDst);
    printf("Before: dest = \"%s\"\n", customDst);
    ft_memmove(customDst, customSrc, n);
    printf("After: dest = \"%s\"\n\n", customDst);

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


void	t_substr(void)
{
	clearScreen();
	printf("Function: char *ft_substr(char const *s, unsigned int start, size_t len)\n");
	printf("Description: The ft_substr() function allocates and returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.\n");
	printf("Input: A pointer to a null-terminated string, the starting index, and the maximum length of the substring\n");
	printf("Output: A pointer to the newly allocated substring, or NULL if the allocation fails\n\n");

	char str1[] = "hello, world";
	printf("Test Case 1: s = \"hello, world\", start = 0, len = 5\n");
	printf("Expected Output: \"hello\"\n");
	char *result1 = ft_substr(str1, 0, 5);
	if (result1 != NULL) {
		printf("Result: %s\n\n", result1);
		free(result1);
	} else {
		printf("Result: NULL\n\n");
	}

	char str2[] = "hello, world";
	printf("Test Case 2: s = \"hello, world\", start = 7, len = 5\n");
	printf("Expected Output: \"world\"\n");
	char *result2 = ft_substr(str2, 7, 5);
	if (result2 != NULL) {
		printf("Result: %s\n\n", result2);
		free(result2);
	} else {
		printf("Result: NULL\n\n");
	}

	char str3[] = "hello, world";
	printf("Test Case 3: s = \"hello, world\", start = 0, len = 100\n");
	printf("Expected Output: \"hello, world\"\n");
	char *result3 = ft_substr(str3, 0, 100);
	if (result3 != NULL) {
		printf("Result: %s\n\n", result3);
		free(result3);
	} else {
		printf("Result: NULL\n\n");
	}

	char str4[] = "hello, world";
	printf("Test Case 4: s = \"hello, world\", start = 20, len = 5\n");
	printf("Expected Output: \"\"\n");
	char *result4 = ft_substr(str4, 20, 5);
	if (result4 != NULL) {
		printf("Result: %s\n\n", result4);
		free(result4);
	} else {
		printf("Result: NULL\n\n");
	}

	char str5[] = "hello, world";
	printf("Test Case 5: s = \"hello, world\", start = 5, len = 0\n");
	printf("Expected Output: \"\"\n");
	char *result5 = ft_substr(str5, 5, 0);
	if (result5 != NULL) {
		printf("Result: %s\n\n", result5);
		free(result5);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Enter a string to test: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter the starting index: ");
	unsigned int start;
	scanf("%u", &start);
	printf("Enter the maximum length: ");
	size_t len;
	scanf("%zu", &len);
	char *customResult = ft_substr(customStr, start, len);
	if (customResult != NULL) {
		printf("Result: %s\n\n", customResult);
		free(customResult);
	} else {
		printf("Result: NULL\n\n");
	}
}

void uppercaseChar(unsigned int i, char *c) {
	int k = i;
	i = k;
	*c = ft_toupper(*c);
}

void lowercaseChar(unsigned int i, char *c) {
	int k = i;
	i = k;
		*c = ft_tolower(*c);
}

	void addOffset(unsigned int i, char *c) {
		int k = i;
		i = k;
		*c += i;
	}

	void multiplyByIndex(unsigned int i, char *c) {
		int k = i;
		i = k;
		*c = (*c - 'a') * i + 'a';
	}

void	t_striteri(void)
{

	clearScreen();
	printf("Function: void ft_striteri(char *s, void (*f)(unsigned int, char *))\n");
	printf("Description: The ft_striteri() function applies the function 'f' on each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to 'f' to be modified if necessary.\n");
	printf("Input: A pointer to a null-terminated string, and a pointer to a function that takes an unsigned integer index and a pointer to a character\n");
	printf("Output: None (modifies the string in-place)\n\n");

	char str1[] = "HELlo2";
	printf("Test Case 1: s = \"HELlo2\", f = uppercaseChar\n");
	printf("Expected Output: \"HELLO2\"\n");
	printf("Before: %s\n", str1);
	ft_striteri(str1, uppercaseChar);
	printf("After: %s\n\n", str1);

	char str2[] = "WORld1";
	printf("Test Case 2: s = \"WORld1\", f = lowercaseChar\n");
	printf("Expected Output: \"world1\"\n");
	printf("Before: %s\n", str2);
	ft_striteri(str2, lowercaseChar);
	printf("After: %s\n\n", str2);

	char str3[] = "012345";

	printf("Test Case 3: s = \"012345\", f = addOffset (add index to character)\n");
	printf("Expected Output: \"012345\"\n");
	printf("Before: %s\n", str3);
	ft_striteri(str3, addOffset);
	printf("After: %s\n\n", str3);

	char str4[] = "abcd";

	printf("Test Case 4: s = \"abcd\", f = multiplyByIndex (multiply each character by its index)\n");
	printf("Expected Output: \"adce\"\n");
	printf("Before: %s\n", str4);
	ft_striteri(str4, multiplyByIndex);
	printf("After: %s\n\n", str4);

	printf("Enter a string to modify: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter 1 to uppercase, 2 to lowercase, or 3 to add offset: ");
	int choice;
	scanf("%d", &choice);
	printf("Before: %s\n", customStr);
	switch (choice) {
		case 1:
			ft_striteri(customStr, uppercaseChar);
			break;
		case 2:
			ft_striteri(customStr, lowercaseChar);
			break;
		case 3:
			ft_striteri(customStr, addOffset);
			break;
		default:
			printf("Invalid choice.\n");
			break;
	}
	printf("After: %s\n\n", customStr);
}

void	t_putchar_fd(void)
{
	clearScreen();
	printf("Function: void ft_putchar_fd(char c, int fd)\n");
	printf("Description: The ft_putchar_fd() function writes the character c to the file descriptor fd.\n");
	printf("Input: A character and a file descriptor\n");
	printf("Output: The character is written to the specified file descriptor\n\n");

	// Test Case 1: Writing to standard output (fd = 1)
	printf("Test Case 1: Writing to standard output (fd = 1)\n");
	printf("Expected Output: 'X' should be printed to the console\n");
	ft_putchar_fd('X', 1);
	printf("\n\n");

	// Test Case 2: Writing to standard error (fd = 2)
	printf("Test Case 2: Writing to standard error (fd = 2)\n");
	printf("Expected Output: 'E' should be printed to the standard error stream\n");
	ft_putchar_fd('E', 2);
	printf("\n\n");

	// Test Case 3: Writing to a file (fd = 3)
	printf("Test Case 3: Writing to a file (fd = 3)\n");
	printf("Enter a character to write to a file: ");
	char customChar;
	scanf(" %c", &customChar);
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) {
		printf("Failed to open or create the file.\n");
		return;
	}
	ft_putchar_fd(customChar, fd);
	close(fd);
	printf("Character written to the file 'test_file.txt'\n\n");
}

void	t_putendl_fd(void)
{

	clearScreen();
	printf("Function: void ft_putendl_fd(char const *s, int fd)\n");
	printf("Description: The ft_putendl_fd() function writes the null-terminated string s to the file descriptor fd, followed by a newline character.\n");
	printf("Input: A pointer to a null-terminated string and a file descriptor\n");
	printf("Output: The string is written to the specified file descriptor, followed by a newline character\n\n");

	// Test Case 1: Writing to standard output (fd = 1)
	printf("Test Case 1: Writing to standard output (fd = 1)\n");
	printf("Expected Output: 'Hello, world!' should be printed to the console, followed by a newline\n");
	ft_putendl_fd("Hello, world!", 1);
	printf("\n");

	// Test Case 2: Writing to standard error (fd = 2)
	printf("Test Case 2: Writing to standard error (fd = 2)\n");
	printf("Expected Output: 'Error message' should be printed to the standard error stream, followed by a newline\n");
	ft_putendl_fd("Error message", 2);
	printf("\n");

	// Test Case 3: Writing to a file (fd = 3)
	printf("Test Case 3: Writing to a file (fd = 3)\n");
	printf("Enter a string to write to a file: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) {
		printf("Failed to open or create the file.\n");
		return;
	}
	ft_putendl_fd(customStr, fd);
	close(fd);
	printf("String written to the file 'test_file.txt', followed by a newline\n\n");
}

void	t_putnbr_fd(void)
{

	clearScreen();
	printf("Function: void ft_putnbr_fd(int n, int fd)\n");
	printf("Description: The ft_putnbr_fd() function writes the integer n to the file descriptor fd.\n");
	printf("Input: An integer and a file descriptor\n");
	printf("Output: The integer is written to the specified file descriptor\n\n");

	// Test Case 1: Writing to standard output (fd = 1)
	printf("Test Case 1: Writing to standard output (fd = 1)\n");
	printf("Expected Output: '42' should be printed to the console\n");
	ft_putnbr_fd(42, 1);
	printf("\n\n");

	// Test Case 2: Writing to standard error (fd = 2)
	printf("Test Case 2: Writing to standard error (fd = 2)\n");
	printf("Expected Output: '-123' should be printed to the standard error stream\n");
	ft_putnbr_fd(-123, 2);
	printf("\n\n");

	// Test Case 3: Writing to a file (fd = 3)
	printf("Test Case 3: Writing to a file (fd = 3)\n");
	printf("Enter an integer to write to a file: ");
	int customInt;
	scanf("%d", &customInt);
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Failed to open or create the file.\n");
		return ;
	}
	ft_putnbr_fd(customInt, fd);
	close(fd);
	printf("Integer written to the file 'test_file.txt'\n\n");
}

void	t_putstr_fd(void)
{
	clearScreen();
	printf("Function: void ft_putstr_fd(char const *s, int fd)\n");
	printf("Description: The ft_putstr_fd() function writes the null-terminated string s to the file descriptor fd.\n");
	printf("Input: A pointer to a null-terminated string and a file descriptor\n");
	printf("Output: The string is written to the specified file descriptor\n\n");

	// Test Case 1: Writing to standard output (fd = 1)
	printf("Test Case 1: Writing to standard output (fd = 1)\n");
	printf("Expected Output: 'Hello, world!' should be printed to the console\n");
	ft_putstr_fd("Hello, world!", 1);
	printf("\n\n");

	// Test Case 2: Writing to standard error (fd = 2)
	printf("Test Case 2: Writing to standard error (fd = 2)\n");
	printf("Expected Output: 'Error message' should be printed to the standard error stream\n");
	ft_putstr_fd("Error message", 2);
	printf("\n\n");

	// Test Case 3: Writing to a file (fd = 3)
	printf("Test Case 3: Writing to a file (fd = 3)\n");
	printf("Enter a string to write to a file: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) {
		printf("Failed to open or create the file.\n");
		return;
	}
	ft_putstr_fd(customStr, fd);
	close(fd);
	printf("String written to the file 'test_file.txt'\n\n");
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
//t_memmove();
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
//t_substr();
//t_striteri();
//t_putchar_fd();
//t_putendl_fd();
//t_putnbr_fd();
//t_putstr_fd();

	return (0);
}