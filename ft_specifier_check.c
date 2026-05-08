/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_check.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 18:25:04 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 15:05:58 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_specifier_check(char *specifier_flags, char c)
{
	return (ft_strchr(specifier_flags, c) != NULL);
}