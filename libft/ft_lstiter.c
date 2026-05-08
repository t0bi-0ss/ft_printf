/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:42:43 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/04 11:46:23 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		(*f)(tmp->content);
		tmp = tmp->next;
	}
}

/*static void	all_say_hello(void *content)
{
	char	*str;

	str = "Hello World";
	content = str;
}
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

	ft_lstiter(head, all_say_hello);

	t_list  *tmp = head;
	while (tmp != NULL)
	{
		printf("node content is: %s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}*/