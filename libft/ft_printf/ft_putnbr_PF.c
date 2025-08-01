/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_PF.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:16:34 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/07/31 18:30:28 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putnbr_PF(int n)
{
	char	number;
	int		count;
	long	nb;

	nb = (long)n;
	count = 0;
	if (nb < 0)
	{
		count += write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		count += ft_putnbr_PF(nb / 10);
	number = (nb % 10) + '0';
	count += write (1, &number, 1);
	return (count);
}
