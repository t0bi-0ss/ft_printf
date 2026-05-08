/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 16:55:23 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/01 21:54:35 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*tmp;

	tmp = lst;
	count = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
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

	printf("list size is = %i\n", ft_lstsize(head));
	return (0);
}*/