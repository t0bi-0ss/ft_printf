/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 18:43:01 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/14 13:05:16 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	bytes_written(char const *format, va_list args, int *counter_ptr)
{
	int	bytes_written;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			bytes_written = ft_flag_cases(args, *format);
		}
		else
			bytes_written = ft_new_putchar_fd(*format, 1);
		if (bytes_written < 0)
			return (-1);
		*counter_ptr += bytes_written;
		format++;
	}
	return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		counter;
	int		checker;

	if (!format)
		return (-1);
	counter = 0;
	va_start(args, format);
	checker = bytes_written(format, args, &counter);
	if (checker < 0)
		return (-1);
	va_end(args);
	return (counter);
}
