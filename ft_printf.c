/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 18:43:01 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 15:05:57 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		result;
	char	*specifier_flags;

	result = 1;
	specifier_flags = "cspdiuxX%%";
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!ft_specifier_check(specifier_flags, *format))
			{
				va_end(args);
				result = -1;
				return (result);
			}
			result = ft_flag_checker(args, *format++);
			if (result < 0)
			{
				va_end(args);
				return (result);
			}
		}
		result = ft_new_putchar_fd(*format, 1);
		format++;
	}
	va_end(args);
	return (result);
}
