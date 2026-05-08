/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:13:08 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/01 21:30:36 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			s_len;
	unsigned int	index;

	if (s)
	{
		s_len = ft_strlen(s);
		index = 0;
		while (index < s_len)
		{
			f(index, &s[index]);
			index++;
		}
	}
}
