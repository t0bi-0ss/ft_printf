/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 14:40:07 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/01 21:31:12 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	long	quotient;
	char	to_be_passed;

	num = (long)n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
	}
	quotient = num / 10;
	to_be_passed = (num % 10) + '0';
	if (quotient > 0)
		ft_putnbr_fd(quotient, fd);
	write(fd, &to_be_passed, 1);
}
