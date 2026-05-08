/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 18:43:01 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 19:19:21 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	bytes_written(char const *format, va_list args, int *counter_ptr)
{
	int	counter;
	int	bytes_written;

	counter = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			bytes_written = ft_flag_cases(args, *format, counter_ptr);
		}
		else
			bytes_written = ft_new_putchar_fd(*format, 1);
		if (bytes_written < 0)
			return (-1);
		counter += bytes_written;
		format++;
	}
	return (counter);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		counter;
	int		checker;
	int		*counter_ptr;

	counter = 0;
	counter_ptr = &counter;
	va_start(args, format);
	checker = bytes_written(format, args, counter_ptr);
	if (checker < 0)
		return (-1);
	va_end(args);
	return (counter);
}
