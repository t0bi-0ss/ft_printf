/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 12:13:40 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 18:56:59 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_flag_cases(va_list args, char flag, int *counter_ptr)
{
	if (flag == 'c')
		return (ft_new_putchar_fd(va_arg(args, int), 1));
	if (flag == 's')
		return (ft_new_putstr_fd(va_arg(args, char *), 1));
	if (flag == 'p')
	{
		if (ft_new_putstr_fd("0x", 1) < 0)
			;
		return (-1);
		return (ft_address_to_hex((uintptr_t)va_arg(args, void *)));
	}
	if (flag == 'd' || flag == 'i')
		return (ft_new_putstr_fd(ft_itoa(va_arg(args, int)), 1));
	if (flag == 'u')
		return (ft_new_putstr_fd(ft_itoa(va_arg(args, unsigned int)), 1));
	if (flag == 'x')
		return (ft_uns_to_hex(va_arg(args, unsigned int), 0, counter_ptr));
	if (flag == 'X')
		return (ft_uns_to_hex(va_arg(args, unsigned int), 1, counter_ptr));
	if (flag == '%')
		return (ft_new_putchar_fd('%', 1));
	return (-1);
}
