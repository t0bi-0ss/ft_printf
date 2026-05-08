/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 16:19:49 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/01 19:40:56 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc (sizeof(t_list));
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*#include <stdio.h>
int main(void)
{
	int	*arr = malloc(2 * sizeof(int));
	arr[0] = 1000;
	t_list *new_node = ft_lstnew(arr);
	printf("new_node content is: %i\n", *(int *)new_node->content);
	char	*str = "Hello World";
	t_list	*new_node_2 = ft_lstnew(str);
	printf("new_node_2 content is: %s\n", (char *)new_node_2->content);
	return (0);
}*/
