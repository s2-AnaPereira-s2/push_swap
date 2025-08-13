/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:43:49 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/13 20:32:11 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_ps *ps)
{
	if (ps->a && ps->a->next)
		if (*(int *)ps->a->content > *(int *)ps->a->next->content)
			sa(ps);
}

void	sort_3(t_ps *ps)
{
	if (ps->a && ps->a->next && ps->a->next->next)
	{
		while (*(int *)ps->a->content > *(int *)ps->a->next->content || *(int *)ps->a->next->content > *(int *)ps->a->next->next->content)
		{
			if (*(int *)ps->a->content > *(int *)ps->a->next->next->content)
			{
				ra(ps);
				sort_3(ps);
			}
			if (*(int *)ps->a->content > *(int *)ps->a->next->content)
			{
				sa(ps);
				sort_3(ps);
			}
			if (*(int *)ps->a->next->content > *(int *)ps->a->next->next->content)
			{
				sa(ps);
				sort_3(ps);
			}	
		}
	}
}

void	sort_4(t_ps *ps)
{
	if (!ps->a)
		return ;
	push_minor_a(ps);
	sort_3(ps);
	pa(ps);
}

void	sort_5(t_ps *ps)
{
	if (!ps->a)
		return ;
	push_minor_a(ps);
    sort_4(ps);
	pa(ps);
}
