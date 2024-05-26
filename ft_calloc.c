/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 22:06:46 by athonda           #+#    #+#             */
/*   Updated: 2024/05/26 20:50:05 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_calloc.c
 * @brief allocate dynamic memory to create several sizes of array
*/

#include "libft.h"
#include <stdint.h>

/**
 * @fn void *ft_calloc(size_t nmemb, size_t size)
 * @brief
 * @param[in] nmemb is unit of memory, like char, int
 * @param[in] size is the number of units. how many block in address
 * @return void type pointer, because no need to specify the type
 * @note Ordinally array must be declared with static size
	In case the size depends on the argument, dynamic memory needed
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	if (nmemb > 2147483647 && size > 2147483647)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
