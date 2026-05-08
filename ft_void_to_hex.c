/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_void_to_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:09:09 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 15:05:59 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_void_to_hex(uintptr_t address)
{
	uintptr_t		quotient;
	unsigned char	remainder;

	quotient = address / 16;
	remainder = address % 16;
	if (quotient > 0)
		ft_void_to_hex(quotient);
	if (quotient == 0)
		ft_new_putstr_fd("0x", 1);
	return (ft_new_putchar_fd(ft_to_hex(remainder), 1));
}
