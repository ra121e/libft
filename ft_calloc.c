/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 22:06:46 by athonda           #+#    #+#             */
/*   Updated: 2024/05/18 22:36:31 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
	allocate dynamic memory
	To create several sizes of array
*/

#include "libft.h"

/*
	Ordinally array must be declared with static size
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