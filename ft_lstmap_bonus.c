/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 11:35:42 by athonda           #+#    #+#             */
/*   Updated: 2024/05/28 22:17:57 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstmap.c
 * @brief iterate list applying f, and creat new list resulting repeat f
*/

#include "libft.h"

/**
 * @fn t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
 * @brief generate new node, which content modified from prev node, make link
 * @param[in]	lst node existing, including content
 * @param[in,out]	function: iterate on the list, modifiy content
 * @param[in,out]	function: delete all list used by ft_lstclear
 * @return Its head node which point the first node
 * @note Might be Exception of the rule, but not impossibe to say...
	- Focusing on generating nodes, there is no link list yet
	- revise 1: memory leak. put delete content in NULL check statement
	- revise 2: seg fault. No put delete head in NULL check. lstclear did it
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*head;
	t_list	*new_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		node = ft_lstnew(new_content);
		if (node == NULL)
		{
			del(new_content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
