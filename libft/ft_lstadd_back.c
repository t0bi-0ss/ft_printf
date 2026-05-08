/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:32:17 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/01 21:49:36 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
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
	printf("head content is: %s \n", (char *)head->content);
	printf("head next node is: %p \n", (char *)head->next);

	ft_lstadd_front(&head, node_2);
	printf("head content is: %s \n", (char *)head->content);
	printf("head next node is: %p \n", (char *)head->next);

	ft_lstadd_front(&head, node_3);
	printf("head content is: %s \n", (char *)head->content);
	printf("head next node is: %p \n", (char *)head->next);

	ft_lstadd_front(&head, node_null);
	printf("head content is: %s \n", (char *)head->content);
	printf("head next node is: %p \n", (char *)head->next);

	ft_lstadd_back(&head, node_4);
	printf("head content is: %s \n", (char *)head->content);
	printf("head next node is: %p \n", (char *)head->content);

	t_list *tmp = head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	printf("last node content is: %s \n", (char *)tmp->content);
	printf("last node next node is: %p \n", (char *)tmp->next);
	return (0);
}*/