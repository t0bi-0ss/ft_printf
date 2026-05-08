/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:29:48 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/06 14:24:53 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d_ptr;
	const unsigned char	*s_ptr;

	if (!dest && !src)
		return (dest);
	s_ptr = src;
	d_ptr = dest;
	if (d_ptr < s_ptr)
	{
		while (n--)
			*d_ptr++ = *s_ptr++;
	}
	else
	{
		while (n--)
			*(d_ptr + n) = *(s_ptr + n);
	}
	return (dest);
}
