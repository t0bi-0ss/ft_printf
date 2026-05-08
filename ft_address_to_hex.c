/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:09:09 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 18:14:05 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_address_to_hex(uintptr_t address)
{
	int				checker;
	uintptr_t		quotient;
	unsigned char	remainder;

	quotient = address / 16;
	remainder = address % 16;
	if (quotient > 0)
	{
		checker = ft_address_to_hex(quotient);
		if (checker < 0)
			return (-1);
	}
	return (ft_new_putchar_fd(ft_to_hex(remainder), 1));
}
