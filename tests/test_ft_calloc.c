/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 22:06:46 by athonda           #+#    #+#             */
/*   Updated: 2024/08/16 15:14:15 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_calloc.c
 * @brief allocate dynamic memory to create several sizes of array
*/

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdint.h>

/**
 * @fn void *ft_calloc(size_t nmemb, size_t size)
 * @brief
 * @param[in] nmemb is unit of memory, like char, int
 * @param[in] size is the number of units. how many block in address
 * @return void type pointer, because no need to specify the type
 * @note Ordinally array must be declared with static size
	In case the size depends on the argument, dynamic memory neededi
	if -number comes, it convert to big positive number bucasue of size_t
	original calloc and malloc in this function return null. same behavior
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
int	main(void)
{
	void	*ptr;
	void	*ptr2;
	size_t	size;
	size_t	size_zero;
	size_t	size_negative;
	int	i;
	int	int_zero;
	int	int_negative;
	int	int_huge;

	i = 2147483648;
	int_zero = 0;
	int_negative = -2147483649;
	int_huge = 3781937419847198;
	size_zero = 0;
	size_negative = -5;
	size = 18446744073709551615;
	printf("size zero: %ld\n", size_zero);
	printf("size_negative:%ld\n", size_negative);
	printf("size excess: %ld\n", size);
	printf("size max: %zu\n", SIZE_MAX);
	printf("int zero: %d\n", int_zero);
	printf("int_negathive:%d\n", int_negative);
	printf("int huge: %d\n", int_huge);
	printf("int excess: %d\n", i);
	printf("int max: %u\n", INT_MAX);


	ptr = malloc(sizeof (char) * size);
	printf("size: %p\n", ptr);
	ptr2 = calloc(1, size);
	printf("%p\n", ptr2);

	ptr = malloc(sizeof (char) * size_zero);
	printf("size_zero: %p\n", ptr);
	ptr2 = calloc(1, size_zero);
	printf("%p\n", ptr2);

	ptr = malloc(sizeof (char) * size_negative);
	printf("size_negative: %p\n", ptr);
	ptr2 = calloc(1, size_negative);
	printf("%p\n", ptr2);

	ptr = malloc(sizeof (char) * SIZE_MAX);
	printf("size_max: %p\n", ptr);
	ptr2 = calloc(1, SIZE_MAX);
	printf("%p\n", ptr2);

	ptr = malloc(sizeof (char) * i);
	printf("int i: %p\n", ptr);
	ptr2 = calloc(1, i);
	printf("%p\n", ptr2);

	ptr = malloc(sizeof (char) * int_zero);
	printf("int_zero: %p\n", ptr);
	ptr2 = calloc(1, int_zero);
	printf("%p\n", ptr2);

	ptr = malloc(sizeof (char) * int_negative);
	printf("int_negative: %p\n", ptr);
	ptr2 = calloc(1, int_negative);
	printf("%p\n", ptr2);

	ptr = malloc(sizeof (char) * INT_MAX);
	printf("int_max: %p\n", ptr);
	ptr2 = calloc(1, INT_MAX);
	printf("%p\n", ptr2);
	return (0);
}
*/