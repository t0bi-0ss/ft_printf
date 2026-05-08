/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 12:13:40 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 15:05:00 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_flag_checker(va_list args, char flag)
{
	int	result;

	// cspdiuxX % %
	if (flag == 'c')
		return (ft_new_putchar_fd(va_arg(args, int), 1));
	if (flag == 's')
		return (ft_new_putstr_fd(va_arg(args, char *), 1));
	if (flag == 'p')
	{
		result = (ft_new_putstr_fd("0x", 1));
		if (result < 0)
			return (-1);
		return (ft_void_to_hex((uintptr_t)va_arg(args, void *)));
	}
	return (-1);
}
