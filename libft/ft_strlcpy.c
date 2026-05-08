/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:18:08 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/04/22 12:25:35 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s_ptr;

	s_ptr = src;
	if (size == 0)
		return (ft_strlen(src));
	while ((size-- - 1) > 0 && *s_ptr)
		*dst++ = *s_ptr++;
	*dst = '\0';
	return (ft_strlen(src));
}
