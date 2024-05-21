/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:53:26 by athonda           #+#    #+#             */
/*   Updated: 2024/05/21 14:44:47 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_striteri.c
 * @brief I give you the string index and the address, then as you like
*/

#include "libft.h"

/**
 * @fn void ft_striteri(char *s, void (*f)(unsigned int, char*))
 * @brief just givet the address of each letters
 * @param[in] s text
 * @param[out] f function gets index number and the letter
 * @return none
 * @note no return from f function, then no return no no no
 */

void	ft_striteri(char *s, void(*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}