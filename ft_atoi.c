/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 19:08:38 by athonda           #+#    #+#             */
/*   Updated: 2024/05/18 21:33:03 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Convert a string to an integer
	numbers on screen is ascii letters stored in char array
	combine the numbers and convert it to number value
*/

#include "libft.h"
//int	ft_isdigit(int c);

/*
	get string by pointer and check each char by 3 stage rocket
	1st stage ignore space
	2nd stage check + or -
	3rd stage get number and convert into a variable
	finally put negative
	return the value or 0 in case error
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