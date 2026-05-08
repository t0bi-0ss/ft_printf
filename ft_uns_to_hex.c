/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:09:09 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 18:58:22 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// if flag is == 1 it returns the hex value in capitals
int	ft_uns_to_hex(unsigned int num, char flag, int *counter_ptr)
{
	int				checker;
	unsigned int	quotient;
	unsigned char	remainder;

	quotient = num / 16;
	remainder = num % 16;
	if (quotient > 0)
	{
		checker = ft_uns_to_hex(quotient, flag, counter_ptr);
		if (checker < 0)
			return (-1);
	}
	if (flag == 1)
	{
		checker = ft_new_putchar_fd(ft_toupper(ft_to_hex(remainder)), 1);
		if (checker < 0)
			return (-1);
	}
	checker = ft_new_putchar_fd(ft_to_hex(remainder), 1);
	if (checker < 0)
		return (-1);
	*counter_ptr += 1;
	return (0);
}
