/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 13:43:25 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/04 19:34:01 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result_str;
	size_t			s_len;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	index = 0;
	s_len = ft_strlen(s);
	result_str = malloc((s_len + 1) * sizeof(char));
	if (!result_str)
		return (NULL);
	while (index < s_len)
	{
		result_str[index] = f(index, (char)s[index]);
		index++;
	}
	result_str[index] = '\0';
	return (result_str);
}
