/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_putchar_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:23:56 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/09 19:09:53 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_new_putchar_fd(char c, int fd)
{
	int bytes_written;

	bytes_written = (write(fd, &c, 1));
	if (bytes_written < 0)
		return (-1);
	return (bytes_written);
}
