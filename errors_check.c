/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:46:26 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/07 19:04:45 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_isnumber(char *number)
{
	int	i;
	
	i = 0;
	while (number[i])
	{
		if (number[i] == '-' || (number[i] >= '0' && number[i] <= '9'))
			i++;
		else 
			return (1);
	}
	return (0);
}

int	repeat_number(t_ps *ps)
{
	int	i;
	int j;
	int	temp;

	i = 0;
	while (ps->stack_a[i])
	{
		temp = ps->stack_a[i];
		j = 0;
		while (ps->stack_a[j])
		{
			if (temp == ps->stack_a[j] && i != j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int isMax_isMin(t_ps *ps)
{
    int i;
    
    i = 0;
    while (ps->stack_a[i])
    {
        ft_printf("%d - %s\n", ps->stack_a[i], "I was here");
        if (ps->stack_a[i] > 2147483647 || ps->stack_a[i] < -2147483648)
        {
            ft_printf("%s\n", "I was here");
            return (1);
        }    
        i++;
    }
    return (0);
}