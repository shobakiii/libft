/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghanmiy <mghanmiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:59:32 by mghanmiy          #+#    #+#             */
/*   Updated: 2026/10/06 15:05:09 by mghanmiy         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *current;
	t_list *new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	current = lst;
	while (current)
	{
		new_node = ft_lstnew(f(current->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		current = current->next;
	}
	return (new_lst);
}