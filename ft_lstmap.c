/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:35:42 by athonda           #+#    #+#             */
/*   Updated: 2024/05/28 15:33:33 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstmap.c
 * @brief iterate list applying f, and creat new list resulting repeat f
*/

#include "libft.h"

/**
 * @fn t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
 * @brief
 * @param[in]	lst
 * @param[in,out]	function: iterate on the list
 * @param[in,out]	function: delete
 * @note Might be Exception of the rule, but not impossibe to say...
	-
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
