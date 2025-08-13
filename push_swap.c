/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:10:09 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/13 19:44:38 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	hard_sort(t_ps *ps)
{
	if (ps->size == 1)
		return ;
	if (ps->size == 2)
		sort_2(ps);
	if (ps->size == 3)
		sort_3(ps);
	if (ps->size == 4)
		sort_4(ps);
	if (ps->size == 5)
		sort_5(ps);
}

int	main(int argc, char **argv)
{
	t_ps	ps;

	if (argc == 1)
		return (0);
	ps.a = NULL;
	ps.b = NULL;
	ps_size(&ps, argv);
	ps.stack_a = malloc((ps.size) * sizeof(int));
	if (!numbers_array(&ps, argv) || !repeat_number(&ps))
		return (ft_putstr_fd("Error\n", 2), free(ps.stack_a), 0);
	linked_list(&ps);
	put_index(&ps);
	if (ps.size < 6)
		return (hard_sort(&ps), free(ps.stack_a), free_lists(&ps), 1);
	radix_sort(&ps);
	return (free(ps.stack_a), free_lists(&ps), 1);
}
