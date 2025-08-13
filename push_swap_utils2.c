/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:51:44 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/13 19:16:09 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_last_a(t_ps *ps)
{
	ps->last = ps->a;
	while (ps->last->next != NULL)
		ps->last = ps->last->next;
}

void find_minor_a(t_ps *ps)
{
	ps->temp_list = ps->a;
	ps->minor = ps->temp_list;
	while (ps->temp_list != NULL)
	{
		if (ps->temp_list->index < ps->minor->index)
			ps->minor = ps->temp_list;
		ps->temp_list = ps->temp_list->next;
	}
}

void	push_minor_a(t_ps *ps)
{
	find_minor_a(ps);
	get_last_a(ps);
	if (ps->last->index == ps->minor->index)
		{
			rra(ps);
			pb(ps);
			return ;
		}
	ps->temp_list = ps->a;
	while (ps->temp_list != NULL)
	{
		if (ps->temp_list->index == ps->minor->index)
		{
			pb(ps);
			return ;
		}
		if (ps->temp_list->next->index == ps->minor->index)
		{
			sa(ps);
			pb(ps);
			return ;
		}
		ra(ps);
		ps->temp_list = ps->a;
	}
}

