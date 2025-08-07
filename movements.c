/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:55:33 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/07 15:26:34 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_ps *ps)
{
    int temp;
    
    temp = *(int *)ps->a->content;
	*(int *)ps->a->content = *(int *)ps->a->next->content;
	*(int *)ps->a->next->content = temp;
    ft_printf("%s\n", "sa");
}

void    ra(t_ps *ps)
{
    t_list	*old_head;
	t_list	*last;

	if (!ps->a || !ps->a->next)
		return ;

	old_head = ps->a;
	ps->a = ps->a->next;
	last = ps->a;

	while (last->next != NULL)
		last = last->next;

	last->next = old_head;
	old_head->next = NULL;
    ft_printf("%s\n", "ra");
}

void    pa(t_ps *ps)
{
    t_list	*new;

	new = ps->b;
    ps->b = ps->b->next;
    new->next = ps->a;
    ps->a = new;
    ft_printf("%s\n", "pa");
}

void    pb(t_ps *ps)
{
    t_list	*new;

	new = ps->a;
    ps->a = ps->a->next;
    new->next = ps->b;
    ps->b = new;
    ft_printf("%s\n", "pb");
}
/*
void    rra(t_ps *ps)
{
    
}

void    sb(t_ps *ps)
{
    
}

void    rb(t_ps *ps)
{
    
}

void    rrb(t_ps *ps)
{
    
}

void    pb(t_ps *ps)
{
    
}

void    ss(t_ps *ps)
{
    
}

void    rr(t_ps *ps)
{
    
}

void    rrr(t_ps *ps)
{
    
}
*/
