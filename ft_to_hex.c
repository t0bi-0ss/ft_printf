/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 14:24:43 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/08 15:05:59 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_to_hex(unsigned char num)
{
	if (num == 10)
		return ('a');
	if (num == 11)
		return ('b');
	if (num == 12)
		return ('c');
	if (num == 13)
		return ('d');
	if (num == 14)
		return ('e');
	if (num == 15)
		return ('f');
	return (num + '0');
}
