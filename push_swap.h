/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:11:42 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/08/13 20:31:23 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_ps
{
	t_list	*a;
	t_list	*b;
	t_list  *temp_list;
	t_list	*minor;
	t_list	*last;
	int		*stack_a;
	int	size;
	int sort_index;
	
}t_ps;

void	sort_2(t_ps *ps);
void	sort_3(t_ps *ps);
void	sort_4(t_ps *ps);
void	sort_5(t_ps *ps);
void    sa(t_ps *ps);
void    ra(t_ps *ps);
void    pa(t_ps *ps);
void    rra(t_ps *ps);
void    pb(t_ps *ps);
void	linked_list(t_ps *ps);
int		input_isnumber(char *number);
int		repeat_number(t_ps *ps);
int		number_check(const char *nbr);
void	free_split(char **split);
void	free_list(t_list **head);
void	free_lists(t_ps *ps);
void	linked_list(t_ps *ps);
int		numbers_array(t_ps *ps, char **argv);
void	ps_size(t_ps *ps, char **argv);
void	put_index(t_ps *ps);
void	push_minor_a(t_ps *ps);
void	get_last_a(t_ps *ps);
void	radix_sort(t_ps *ps);
int		is_sorted(t_ps *ps);

# endif