/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:09:09 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/14 13:02:59 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address_to_hex(uintptr_t address, int print_prefix)
{
	int			checker;
	int			bytes;

	bytes = 0;
	if (!address)
		return (ft_new_putstr_fd("(nil)", 1));
	if (print_prefix == 1)
	{
		checker = ft_new_putstr_fd("0x", 1);
		if (checker < 0)
			return (-1);
		bytes += 2;
	}
	if (address / 16 > 0)
	{
		checker = ft_address_to_hex(address / 16, 0);
		if (checker < 0)
			return (-1);
		bytes += checker;
	}
	checker = ft_new_putchar_fd(ft_to_hex(address % 16), 1);
	if (checker < 0)
		return (-1);
	return (++bytes);
}
