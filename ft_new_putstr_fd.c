/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_putstr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:32:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 18:32:31 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_new_putstr_fd(char *s, int fd)
{
	if (write(fd, s, ft_strlen(s)) < 0)
		return (-1);
	return (ft_strlen(s));
}
