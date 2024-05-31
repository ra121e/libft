/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:13:36 by athonda           #+#    #+#             */
/*   Updated: 2024/05/31 18:21:08 by athonda          ###   ########.fr       */
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
 * @note reject: evacuate next address to temp. no need in this function.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del == NULL)
		return ;
	(*del)(lst->content);
	free(lst);
	lst = NULL;
}
