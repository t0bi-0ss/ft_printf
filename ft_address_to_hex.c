/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:09:09 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 20:03:21 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_address_to_hex(uintptr_t address, char flag)
{
	int			checker;
	int			bytes;
	uintptr_t	quotient;

	quotient = address / 16;
	bytes = 0;
	if (flag == 1)
	{
		checker = ft_new_putstr_fd("0x", 1);
		if (checker < 0)
			return (-1);
		bytes += 2;
	}
	if (quotient > 0)
	{
		checker = ft_address_to_hex(quotient, 0);
		if (checker < 0)
			return (-1);
		bytes += checker;
	}
	checker = ft_new_putchar_fd(ft_to_hex(address % 16), 1);
	if (checker < 0)
		return (-1);
	return (++bytes);
}
