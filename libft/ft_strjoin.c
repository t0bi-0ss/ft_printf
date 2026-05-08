/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 07:14:41 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/04/23 18:46:57 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	final_str = malloc(size * sizeof(char));
	if (!final_str)
		return (NULL);
	ft_bzero(final_str, size);
	ft_strlcat(final_str, s1, size);
	ft_strlcat(final_str, s2, size);
	return (final_str);
}
