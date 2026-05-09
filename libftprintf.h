/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:37:40 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/09 19:11:15 by tsordo-o         ###   ########.fr       */
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
char	*ft_utoa(unsigned int n);
int		ft_flag_cases(va_list args, char flag);
int		ft_address_to_hex(uintptr_t address, char flag);
int		ft_uns_to_hex(unsigned int num, char flag);
int		ft_printf(char const *, ...);

#endif
