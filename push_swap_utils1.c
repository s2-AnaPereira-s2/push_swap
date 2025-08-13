/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:37:22 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/13 21:37:28 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	linked_list(t_ps *ps)
{
	t_list	*new;
	int	*temp;
	int i;
	
	i = 0;
	while(i < ps->size)
	{	
		temp = malloc(sizeof(int));
		*temp = ps->stack_a[i];
		new = ft_lstnew(temp);
		if (!new)
		{
			free(temp);
			free_lists(ps);
			return ;
		}
		ft_lstadd_back(&ps->a, new);
		i++;
	}
}

int	numbers_array(t_ps *ps, char **argv)
{
	int	i;
	int j;
	int	c;
	char	**number;

	c = 0;
	i = 1;
	while(argv[i])
	{
		number = ft_split(argv[i], ' ');
		if (!number[0])
			return (free_split(number), 0);
		j = 0;
		while(number[j])
		{
			if (number[j][0] == '\0' || !input_isnumber(number[j]) 
				|| !number_check(number[j]))
				return (free_split(number), 0);
			ps->stack_a[c++] = ft_atoi(number[j++]);
		}
		free_split(number);
		i++;
	}
	return (1);
}

void	ps_size(t_ps *ps, char **argv)
{
	int	i;
	int j;
	char	**number;
	
	ps->size = 0;
	i = 1;
	while(argv[i])
	{
		number = ft_split(argv[i], ' ');
		if (!number)
			return ;
		if (!number[0])
		{
			free_split(number);
			return ;
		}
		j = 0;
		while(number[j])
		{
			ps->size += 1;
			j++;
		}
		free_split(number);
		i++;
	}
}

