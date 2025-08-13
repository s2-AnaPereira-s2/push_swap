/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:49:40 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/13 19:45:04 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	int	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void free_list(t_list **head)
{
    t_list *tmp;

    while (*head != NULL)
    {
        tmp = *head;            
        *head = (*head)->next;
		if (tmp->content)
        	free(tmp->content);
        free(tmp);
    }
	*head = NULL;
}

void	free_lists(t_ps *ps)
{
	free_list(&ps->a); 
	free_list(&ps->b);
}