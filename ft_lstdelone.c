/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:13:36 by athonda           #+#    #+#             */
/*   Updated: 2024/05/27 20:39:18 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstdelone.c
 * @brief Delete the node content and free the node
*/

#include "libft.h"

/**
 * @fn void	ft_lstdelone(t_list *lst, void (*del)(void *))
 * @brief
 * @param[in]	lst the address of the node to be free
 * @param[in,out]	fnction (*del) applied to the node
 * @return none
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = lst->next;
	if (del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
	lst = tmp;
}
