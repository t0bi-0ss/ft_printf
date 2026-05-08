/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:08:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/01 21:30:14 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*u_s1;
	unsigned char	*u_s2;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	index = 0;
	if (!n)
		return (0);
	while (index < n && (u_s1[index] || u_s2[index]))
	{
		if (u_s1[index] != u_s2[index])
			return (u_s1[index] - u_s2[index]);
		index++;
	}
	return (0);
}
