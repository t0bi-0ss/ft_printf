/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_putstr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:32:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/10 16:11:54 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_new_putstr_fd(char *s, int fd)
{
	int	bytes_written;

	if (!s)
	{
		bytes_written = write(fd, "(null)", 6);
		if (bytes_written < 0)
			return (-1);
		return (bytes_written);
	}
	bytes_written = write(fd, s, ft_strlen(s));
	if (bytes_written < 0)
		return (-1);
	return (bytes_written);
}
