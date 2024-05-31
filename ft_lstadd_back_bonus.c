/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:51:19 by athonda           #+#    #+#             */
/*   Updated: 2024/05/27 18:02:20 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_back.c
 * @brief Add the node 'new' at the end of the list
*/

#include "libft.h"

/**
 * @fn void	ft_lstadd_back(t_list **lst, t_list *new)
 * @brief proceed to the tail box and link new box
 * @param[in]	lst the special pointer storeing the address of the first box
 * @param[in]	new the new node to be added
 * @return none
 * @sa ft_lstlast
 * @attention *(lst)->next == NULL
 * @note Why is 1st arge the HEAD pointer by double pointer?
	in case of no link list, the new will be the first one. HEAD point it
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (lst == NULL)
		return ;
	ptr = ft_lstlast(*lst);
	if (ptr == NULL)
	{
		*lst = new;
	}
	else
	{
		ptr->next = new;
	}
	return ;
}
