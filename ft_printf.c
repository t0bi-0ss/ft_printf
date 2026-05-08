/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 18:43:01 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 19:03:09 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		counter;
	int		bytes_written;
	int		*counter_ptr;

	counter = 0;
	counter_ptr = &counter;
	va_start(args, format);
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
		{
			va_end(args);
			return (-1);
		}
		counter += bytes_written;
		format++;
	}
	va_end(args);
	return (counter);
}
