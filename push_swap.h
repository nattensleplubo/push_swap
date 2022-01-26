/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:13:30 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/26 15:35:23 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
#include "./libft/ft_printf/ft_printf.h"
#include <limits.h>
#include <stdio.h>

void	ft_init_a(int argc, char **argv, t_list **head_a);
int		ft_is_a_sorted(t_list **head_a);
int		ft_get_lowest(t_list *head);
int		ft_get_highest(t_list **head);
void	lowest_to_b(t_list **head_a, t_list **head_b);

void	sa(t_list **head_a);
void	sb(t_list **head_b);
void	ss(t_list **head_a, t_list **head_b);
int		ra(t_list **head);
int		rb(t_list **head);
void	rr(t_list **head_a, t_list **head_b);
void	rra(t_list **head);
void	rrb(t_list **head);
void	rrr(t_list **head_a, t_list **head_b);
void	pa(t_list **head_a, t_list **head_b);
void	pb(t_list **head_a, t_list **head_b);

void	ft_radix(t_list **head_a, t_list **head_b);
void	ft_sort_two(t_list **head);
int		check_args(int argc, char **argv);
void	ft_sort_three(t_list **head);
void	ft_sort_five(t_list **head_a, t_list **head_b);
void 	ft_sort_four(t_list **head_a, t_list **head_b);
#endif
