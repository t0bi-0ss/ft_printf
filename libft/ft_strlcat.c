/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:31:56 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/01 21:29:35 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			dst_len;
	size_t			src_len;
	size_t			dst_end;
	unsigned int	index;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (dst_len >= size)
		return (src_len + size);
	dst_end = dst_len;
	index = 0;
	while (index < (size - dst_len - 1) && src[index])
		dst[dst_end++] = src[index++];
	dst[dst_end] = '\0';
	return (src_len + dst_len);
}
