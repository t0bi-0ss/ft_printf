/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 06:39:08 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/04/23 13:11:46 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*ptr;

	s_len = ft_strlen(s);
	ptr = malloc(s_len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, s_len + 1);
	return (ptr);
}
