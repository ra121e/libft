/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 09:38:24 by athonda           #+#    #+#             */
/*   Updated: 2024/05/28 14:28:42 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstnew.c
 * @brief allocate and return new node
*/

#include "libft.h"

/**
 * @fn l_list	*ft_lstnew(void *content)
 * @brief make memory area by malloc and set content in the member
 * @param[in]	content any pointer to be set in the list box
 * @return pointer to the beginning of the list
 * @sa malloc
 * @note
	- 1)malloc make 1 size of t_list and cast to t_list type
	- 2)store content in content place
	- 3)set NULL in the next member. its used for linking to other box
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof (t_list) * 1);
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
