/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:30:18 by athonda           #+#    #+#             */
/*   Updated: 2024/05/28 12:09:47 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstiter.c
 * @brief Iterate the list, apply function f on the content of each node
*/

#include "libft.h"

/**
 * @fn void	ft_lstiter(t_list *lst, void (*f)(void *))
 * @brief
 * @param[in]	lst the start pointer to the list. Not address of head->>
 * @param[in,out]	function  do something
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
