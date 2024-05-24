/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:10:44 by athonda           #+#    #+#             */
/*   Updated: 2024/05/24 12:18:06 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	if (n == 0)
		return (s);
	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = c;
		i++;
	}
	return (s);
}
