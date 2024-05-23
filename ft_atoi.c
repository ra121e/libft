/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:08:38 by athonda           #+#    #+#             */
/*   Updated: 2024/05/23 08:00:22 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_atoi.c
 * @brief Convert a string to an integer
	numbers on screen is ascii letters stored in char array
*/

#include "libft.h"
//int	ft_isdigit(int c);

/**
 * @fn int ft_atoi(const char *nptr)
 * @brief combine the number characters into number value
 * @param[in] nptr
 * @return the value or 0 in case error
 * @sa ft_isdigit ft_isspace:inside the file
 * @note get string by pointer and check each char by 3 stage rocket
	- 1st stage ignore space
	- 2nd stage check + or -
	- 3rd stage get number and convert into a variable
	- finally put negative
*/

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' ||
		c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int		ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;
	int	i;

	sign = 1;
	nbr = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nbr = nbr * 10 + (nptr[i] - '0');
		i++;
	}
	return (nbr * sign);
}
