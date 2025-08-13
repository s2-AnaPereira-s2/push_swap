/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:46:26 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/11 20:23:46 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_isnumber(char *number)
{
	int	i;

	i = 0;
	if (number[i] == '+' || number[i] == '-')
		i++;
	if (number[i] == '\0')
		return (0);
	while (number[i])
	{
		if (number[i] < '0' || number[i] > '9')
            return (0);
        i++;
	}
	return (1);
}

int	repeat_number(t_ps *ps)
{
	int	i;
	int j;
	int	temp;

	i = 0;
	while (i < ps->size)
	{
		temp = ps->stack_a[i];
		j = 0;
		while (j < ps->size)
		{
			if (temp == ps->stack_a[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	number_check(const char *nbr)
{
	long	result;
	int	sign;
	int digit;

	sign = 1;
	result = 0;
	while (*nbr)
	{
		while ((*nbr >= 9 && *nbr <= 13))
			nbr++;
		if (*nbr == '+' || *nbr == '-')
		{
			if (*nbr == '-')
				sign = -1;
			nbr++;
			if (!(*nbr >= '0' && *nbr <= '9'))
				return (0);
		}
		while (*nbr >= '0' && *nbr <= '9')
		{
			digit = *nbr - '0';
			result = result * 10 + digit;
			if ((sign == 1 && result > INT_MAX) || (sign == -1 && -result < INT_MIN))
				return (0);
			nbr++;
		}
	}
	return (1);
}