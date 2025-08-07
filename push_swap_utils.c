/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:51:44 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/07 18:54:28 by ana-pdos         ###   ########.fr       */
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
		j = 0;
		while(number[j])
		{
			if (!input_isnumber(number[j]))
			{
				ps->stack_a[c] = ft_atoi(number[j]);
				j++;
				c++;
			}
			else
				return (free_split(number), 1);
		}
		free_split(number);
		i++;
	}
	return (0);
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
