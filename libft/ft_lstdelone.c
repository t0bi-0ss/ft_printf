/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:39:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/01 22:47:50 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		(*del)(lst->content);
		free(lst);
	}
}

/*static void	del_content(void *content)
{
	free(content);
}
#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *node_1 = ft_lstnew("1");
	t_list *node_2 = ft_lstnew("2");
	t_list *node_3 = ft_lstnew("3");
	t_list *node_4 = ft_lstnew("4");
	t_list *node_null = NULL;

	ft_lstadd_front(&head, node_1);

	ft_lstadd_front(&head, node_2);

	ft_lstadd_front(&head, node_3);

	ft_lstadd_front(&head, node_null);

	ft_lstadd_back(&head, node_4);

	t_list *last_node = ft_lstlast(head);
	printf("last node content is = %s\n", (char *)last_node->content);
	printf("last node 'next node' address is = %p\n", last_node->next);

	ft_lstdelone(head, del_content);
	printf("last node content after lstdelone is = %s\n",
		(char *)head->content);
	printf("last node 'next node' address after lstdelone is = %p\n",
		head->next);
	return (0);
}*/