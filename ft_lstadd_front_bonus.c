/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:13:24 by athonda           #+#    #+#             */
/*   Updated: 2024/05/28 14:46:42 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_front.c
 * @brief Adds the new node at the beginning of the list
*/

#include "libft.h"

/**
 * @fn void	ft_lstadd_front(t_list **lst, t_list *new)
 * @brief
 * @param[in]	lst special pointer to the first box address
 * @param[in]	new pointer to the new box to be added
 * @return none
 * @note applied on List (not node)
	- head and new node receive
	- result is in List(no need return)
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
