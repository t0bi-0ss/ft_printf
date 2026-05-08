/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:40:29 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/04 11:41:10 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		(*del)(tmp->content);
		free(tmp);
	}
}

/*static void    del_content(void *content)
{
	free(content);
}
// REMEMBER to use valgrind in order to run this test
//(valgrind --leak-check=full ./a.out)
#include <stdio.h>

	int	main(void)
	{
		char    *content_1 = malloc(4 * sizeof(char));
		char    *content_2 = malloc(4 * sizeof(char));
		char    *content_3 = malloc(4 * sizeof(char));
		char    *content_4 = malloc(4 * sizeof(char));

		t_list *head = NULL;
		t_list *node_1 = ft_lstnew(content_1);
		t_list *node_2 = ft_lstnew(content_2);
		t_list *node_3 = ft_lstnew(content_3);
		t_list *node_4 = ft_lstnew(content_4);

		ft_lstadd_front(&head, node_1);

		ft_lstadd_front(&head, node_2);

		ft_lstadd_front(&head, node_3);

		ft_lstadd_back(&head, node_4);

		printf("head address is: %p\n", head);
		ft_lstclear(&head, del_content);

		printf("head address is: %p\n", head);
		printf("node_1 address is: %p\n", node_1);
		printf("node_2 address is: %p\n", node_2);
		printf("node_3 address is: %p\n", node_3);
		printf("node_4 address is: %p\n", node_4);

		return (0);
	}*/