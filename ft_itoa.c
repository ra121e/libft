/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:14:01 by athonda           #+#    #+#             */
/*   Updated: 2024/05/26 18:31:24 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_itoa.c
 * @brief converts an integer to a string
*/

#include "libft.h"

/**
 * @fn char	*ft_itoa(int n)
 * @brief make array of number series as string('\0' ends)
 * @param[in]	n the integer to convert
 * @return	pointer to the string
*/

int	ft_digits(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		digits;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = ft_digits(n);
	ptr = (char *)malloc(sizeof (char) * (digits + 1));
	if (ptr == NULL)
		return (NULL);
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		n = n * -1;
		ptr[0] = '-';
	}
	ptr[digits] = '\0';
	while (digits > 0 && n != 0)
	{
		ptr[digits - 1] = '0' + (n % 10);
		n = n / 10;
		digits--;
	}
	return (ptr);
}
