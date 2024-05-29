/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:16:46 by athonda           #+#    #+#             */
/*   Updated: 2024/05/28 15:18:13 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstlast.c
 * @brief return the last node of the list
*/

#include "libft.h"

/**
 * @fn t_list	*ft_lstlast(t_list *lst)
 * @brief
 * @param[in]	lst pointer to the first box
 * @return pointer to the last box
 * @note lstlast is focusing on Node(Link List Rule)
	- 1st node is the clue To reach the last node
	- gives us node address same as lstnew
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (ptr == NULL)
		return (NULL);
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
