/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:43:49 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/07 16:25:39 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_minor_4(t_ps *ps)
{
	t_list	*new;
	int i;
	int	temp;

	new = ps->a;
	temp = *(int *)new->content;
	while (new != NULL)
	{
		if (*(int *)new->content < temp)
			temp = *(int *)new->content;
		new = new->next;
	}
	new = ps->a;
	i = 0;
	while (new != NULL)
	{
		if (*(int *)new->content == temp)
			break ;
		i++;
		new = new->next;
	}
	while(i-- > 0)
		ra(ps);
	pb(ps);
}

void find_minor_5(t_ps *ps)
{
	t_list	*new;
	int i;
	int	temp;

	find_minor_4(ps);
	new = ps->a;
    temp = *(int *)new->content;
	while (new != NULL)
	{
		if (*(int *)new->content < temp)
			temp = *(int *)new->content;
		new = new->next;
	}
	new = ps->a;
	i = 0;
	while (new != NULL)
	{
		if (*(int *)new->content == temp)
			break ;
		i++;
		new = new->next;
	}
	while(i-- > 0)
		ra(ps);
	pb(ps);
}

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
				ra(ps);
			if (*(int *)ps->a->content > *(int *)ps->a->next->content)
				sa(ps);
			if (*(int *)ps->a->next->content > *(int *)ps->a->next->next->content)
			{
				ra(ps);
				ra(ps);
			}	
		}
	}
}

void	sort_4(t_ps *ps)
{
	if (!ps->a)
		return ;
	find_minor_4(ps);
	sort_3(ps);
	pa(ps);
}

void	sort_5(t_ps *ps)
{
	if (!ps->a)
		return ;
    find_minor_5(ps);
    sort_3(ps);
	pa(ps);
	pa(ps);
}

