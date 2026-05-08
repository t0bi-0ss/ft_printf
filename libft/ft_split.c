/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:56:52 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/04 17:03:21 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_get_numof_strings(char const *src, char delimiter)
{
	int	count;

	count = 0;
	while (*src)
	{
		while ((char)*src == delimiter && *src)
			src++;
		if ((char)*src != delimiter && *src)
		{
			count++;
			while ((char)*src != delimiter && *src)
				src++;
		}
	}
	return (count);
}

char static	**ft_create_array_of_strings(int strings_num, size_t string_len)
{
	char	**arr;
	int		index;

	index = 0;
	arr = malloc((strings_num + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (index < strings_num)
	{
		arr[index] = malloc((string_len + 1) * sizeof(char));
		if (!arr[index])
		{
			while (index > 0)
				free(arr[--index]);
			free(arr);
			return (NULL);
		}
		index++;
	}
	arr[index] = NULL;
	return (arr);
}

void	pass_substr_to_arr(char const *src, char **arr, int strings_num,
		char delimiter)
{
	int	row;
	int	col;

	row = 0;
	while (row < strings_num)
	{
		col = 0;
		while ((char)*src == delimiter && *src)
			src++;
		while ((char)*src != delimiter && *src)
			arr[row][col++] = (char)*src++;
		arr[row][col] = '\0';
		row++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		numof_strings;
	char	**arr;

	numof_strings = ft_get_numof_strings(s, c);
	arr = ft_create_array_of_strings(numof_strings, ft_strlen(s));
	if (!arr)
		return (NULL);
	pass_substr_to_arr(s, arr, numof_strings, c);
	return (arr);
}
