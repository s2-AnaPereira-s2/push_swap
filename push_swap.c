/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:10:09 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/07 19:00:17 by ana-pdos         ###   ########.fr       */
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
		return (1);
	ps.a = NULL;
	ps_size(&ps, argv);
	ps.stack_a = malloc((ps.size) * sizeof(int));
	numbers_array(&ps, argv);
	if (numbers_array(&ps, argv) || repeat_number(&ps) || isMax_isMin(&ps))
		return (ft_printf("%s\n", "Error"), 1);
	linked_list(&ps);
	if (ps.size <= 5)
		hard_sort(&ps);
	return (0);
}
