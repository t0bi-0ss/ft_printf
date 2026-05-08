/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:13:38 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/04 14:08:45 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

/*#include <stdio.h>

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
	return (0);
}*/