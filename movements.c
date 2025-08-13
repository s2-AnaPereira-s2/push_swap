/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:55:33 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/13 20:28:28 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_ps *ps)
{
    t_list *first;
    t_list *second;

    if (!ps->a || !ps->a->next)
        return;
    first = ps->a;
    second = ps->a->next;
    first->next = second->next;
    second->next = first;
    ps->a = second;
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

void    rra(t_ps *ps)
{
    t_list	*last;
	t_list	*temp;

	if (!ps->a || !ps->a->next)
		return ;

    temp = NULL;
    last = ps->a;
    while (last->next)
    {
        temp = last;
        last = last->next;
    }
	temp->next = NULL;
	last->next = ps->a;
	ps->a = last;
    ft_printf("%s\n", "rra");
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

