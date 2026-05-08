/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:47:30 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/04 13:49:35 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_node;
	t_list	*tmp;
	void	*new_content;

	new_head = NULL;
	tmp = lst;
	while (tmp != NULL)
	{
		new_content = (*f)(tmp->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			(*del)(new_content);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_node);
		tmp = tmp->next;
	}
	return (new_head);
}
