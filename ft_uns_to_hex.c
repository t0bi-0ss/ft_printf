/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:09:09 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 20:08:33 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// if flag is == 1 it returns the hex value in capitals
int	ft_uns_to_hex(unsigned int num, char flag)
{
	int				checker;
	int				bytes_written;
	unsigned int	quotient;

	quotient = num / 16;
	bytes_written = 0;
	if (quotient > 0)
	{
		checker = ft_uns_to_hex(quotient, flag);
		if (checker < 0)
			return (-1);
		bytes_written += checker;
	}
	if (flag == 1)
	{
		checker = ft_new_putchar_fd(ft_toupper(ft_to_hex(num % 16)), 1);
		if (checker < 0)
			return (-1);
	}
	checker = ft_new_putchar_fd(ft_to_hex(num % 16), 1);
	if (checker < 0)
		return (-1);
	return (++bytes_written);
}
