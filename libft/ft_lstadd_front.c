/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 16:42:29 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/04 18:54:39 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node_1 = ft_lstnew("1");
	t_list	*node_2 = ft_lstnew("2");
	t_list	*node_3 = ft_lstnew("3");
	t_list	*node_null = NULL;
	ft_lstadd_front(&head, node_1);
	printf("%s \n", (char *)head->content);
	printf("%s \n", (char *)head->next);
	ft_lstadd_front(&head, node_2);
	printf("%s \n", (char *)head->content);
	printf("%s \n", (char *)head->next);
	ft_lstadd_front(&head, node_3);
	printf("%s \n", (char *)head->content);
	printf("%s \n", (char *)head->next);
	ft_lstadd_front(&head, node_null);
	printf("%s \n", (char *)head->content);
	printf("%s \n", (char *)head->next);
	return (0);
}*/
