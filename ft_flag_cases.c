/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 12:13:40 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/09 19:14:13 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_printnum(va_list args, char flag)
{
	char	*str;
	int		bytes_written;

	str = NULL;
	if (flag == 'd' || flag == 'i')
		str = ft_itoa(va_arg(args, int));
	else if (flag == 'u')
		str = ft_utoa(va_arg(args, unsigned int));
	bytes_written = ft_new_putstr_fd(str, 1);
	if (bytes_written < 0)
	{
		free(str);
		return (-1);
	}
	free(str);
	return (bytes_written);
}

int	ft_flag_cases(va_list args, char flag)
{
	if (flag == 'c')
		return (ft_new_putchar_fd(va_arg(args, int), 1));
	if (flag == 's')
		return (ft_new_putstr_fd(va_arg(args, char *), 1));
	if (flag == 'p')
	{
		return (ft_address_to_hex((uintptr_t)va_arg(args, void *), 1));
	}
	if (flag == 'd' || flag == 'i' || flag == 'u')
		return (ft_printnum(args, flag));
	if (flag == 'x')
		return (ft_uns_to_hex(va_arg(args, unsigned int), 0));
	if (flag == 'X')
		return (ft_uns_to_hex(va_arg(args, unsigned int), 1));
	if (flag == '%')
		return (ft_new_putchar_fd('%', 1));
	return (-1);
}
