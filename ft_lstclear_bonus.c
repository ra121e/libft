/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:46:52 by athonda           #+#    #+#             */
/*   Updated: 2024/05/28 11:14:37 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstclear.c
 * @brief delete and free the node and following nodes
*/

#include "libft.h"

/**
 * @fn void	ft_lstclear(t_list **lst, void (*del)(void *))
 * @brief
 * @param[in]	lst address of the pointer to a node
 * @param[in,out]	function address of fn to delete content and node
 * @return none
 * @sa ft_lstdelone
 * @attention address is still alive!! if the memory is freed!!! Zombeee!!
 * @note each function
	- NULL check for the Head
	- NULL check for the node to be delete at first
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	if (del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
