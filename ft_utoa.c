/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:18:25 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/09 19:39:55 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_digits(unsigned int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		count++;
		num /= 10;
	}
	return (count);
}

static int	power_of_ten(int power)
{
	int	result;

	result = 1;
	while (power--)
		result *= 10;
	return (result);
}

static void	to_string(char *result_str, unsigned int num, int digits_count)
{
	int	index;

	index = 0;
	while (digits_count > 1)
	{
		result_str[index++] = num / power_of_ten(--digits_count) + '0';
		num %= power_of_ten(digits_count);
	}
	result_str[index++] = num + '0';
	result_str[index] = '\0';
}

char	*ft_utoa(unsigned int n)
{
	char			*result_str;
	int				digits_count;

	digits_count = count_digits(n);
	result_str = malloc((digits_count + 1) * sizeof(char));
	if (!result_str)
		return (NULL);
	to_string(result_str, n, digits_count);
	return (result_str);
}
