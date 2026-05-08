/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:37:40 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 15:06:00 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

char	ft_to_hex(unsigned char quotient);
int		ft_new_putchar_fd(char c, int fd);
int		ft_new_putstr_fd(char *s, int fd);
int		ft_specifier_check(char *specifier_flags, char c);
int		ft_flag_checker(va_list args, char flag);
int		ft_void_to_hex(uintptr_t address);
int		ft_printf(char const *, ...);

#endif
