/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:37:40 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/14 13:03:19 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

char	ft_to_hex(unsigned char quotient);
int		ft_new_putchar_fd(char c, int fd);
int		ft_new_putstr_fd(char *s, int fd);
char	*ft_utoa(unsigned int n);
int		ft_flag_cases(va_list args, char flag);
int		ft_address_to_hex(uintptr_t address, int print_prefix);
int		ft_uns_to_hex(unsigned int num, char flag);
int		ft_printf(char const *format, ...);

#endif
