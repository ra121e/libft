/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:14:01 by athonda           #+#    #+#             */
/*   Updated: 2024/05/24 09:07:17 by athonda          ###   ########.fr       */
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

int		ft_digits(int nbr)
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
	int		special;
	int		digits;
	int		minus;
	int		i;

	if (n == '\0')
		return (0);
	digits = ft_digits(n);
	ptr = (char *)malloc(sizeof (char) * (digits + 1));
	if (ptr == NULL)
		return (NULL);
	minus = 0;
	special = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			special = 1;
			n = -147483648;
		}
		n = n * -1;
		minus = 1;

	}
	i = 0;
	while (i < digits)
	{
		ptr[digits - 1 - i] = '0' + (n % 10);
		n = n / 10;
		i++;
	}
	if (minus == 1)
		ptr[0] = '-';
	if (special == 1)
		ptr[1] = '2';
	ptr[digits] = '\0';
	return (ptr);
}