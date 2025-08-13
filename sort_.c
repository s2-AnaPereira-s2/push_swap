/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:47:23 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/13 20:30:42 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_ps *ps)
{
	t_list *temp;
	
	temp = ps->a;
	while (temp && temp->next)
	{
		if (temp->index > temp->next->index)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	radix_sort(t_ps *ps)
{
	int max_index;
	int max_bits;
	int i;
	int j;

	max_index = ps->size - 1;
	max_bits = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits && !is_sorted(ps))
	{
		j = 0;
		while (j < ps->size)
		{
			if(((ps->a->index >> i) & 1) == 0)
				pb(ps);
			else	
				ra(ps);
			j++;
		}
		while (ps->b != NULL)
			pa(ps);
		i++;
	}
}
