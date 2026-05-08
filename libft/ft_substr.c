/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 07:01:29 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/04 17:43:40 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	max_len;

	if (start >= ft_strlen(s))
	{
		substr = malloc(sizeof(char));
		*substr = '\0';
	}
	else
	{
		max_len = ft_strlen(&s[start]);
		if (max_len > len)
			max_len = len;
		substr = malloc((max_len + 1) * sizeof(char));
		if (!substr)
			return (NULL);
		ft_strlcpy(substr, &s[start], max_len + 1);
	}
	return (substr);
}
