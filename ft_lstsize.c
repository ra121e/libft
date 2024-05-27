/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:59:19 by athonda           #+#    #+#             */
/*   Updated: 2024/05/27 16:12:03 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstsize.c
 * @brief Counts the number of nodes in a list
*/

#include "libft.h"

/**
 * @fn int	ft_lstsize(t_list *lst)
 * @brief
 * @param[in]	lst address of the first box, not the pointer of the list
 * @return the length of the list
*/

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		i;

	ptr = lst;
	if (ptr == NULL)
		return (0);
	i = 1;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
