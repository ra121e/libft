/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 22:06:46 by athonda           #+#    #+#             */
/*   Updated: 2024/05/21 23:19:12 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_calloc.c
 * @brief allocate dynamic memory to create several sizes of array
*/

#include "libft.h"

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

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
