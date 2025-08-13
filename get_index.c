/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:47:33 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/11 20:47:39 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_index(t_ps *ps)
{
	t_list	*new;
    t_list *minor;
    int	temp;

	new = ps->a;
    while (new && new->index != -1)
        new = new->next;
    if (!new)
        return (0);
    minor = new;
	temp = *(int *)new->content;
	while (new != NULL)
	{
		if (new->index == -1 && *(int *)new->content < temp)
        {
            temp = *(int *)new->content;
            minor = new;
        }
		new = new->next;
	}
	if (minor)
    {
        minor->index = ps->sort_index++;
    }
    return (1);
}

void	put_index(t_ps *ps)
{

    ps->sort_index = 0;
    while(find_index(ps))
        ;
}
