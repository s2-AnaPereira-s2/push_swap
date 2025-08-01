/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:10:09 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/07/31 19:13:36 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



int	main(int argc, char **argv)
{
	int	i;
	int j;
	int	total_num;
	char	**input;
	
	if (argc == 1)
		return (0);
	
	i = 1;
	while(argv[i])
	{
		input = ft_split(argv[i], ' ');
		j = 0;
		while(input[j])
			j++;
		i++;
	}
	total_num = j;
	ft_printf("%d", total_num);
	return (0);
}