/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:06:24 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/01 21:29:49 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;

	index = 0;
	if (*little == '\0')
		return ((char *)big);
	while (index < len && big[index])
	{
		if (big[index] == *little && index + ft_strlen(little) <= len
			&& !ft_strncmp(big + index, little, ft_strlen(little)))
			return ((char *)&big[index]);
		index++;
	}
	return (NULL);
}
