/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:13:30 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/24 15:40:14 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
#include "./libft/ft_printf/ft_printf.h"
#include <limits.h>

void	ft_init_a(int argc, char **argv, t_list **head_a);
int		ft_is_a_sorted(t_list **head_a);
int		sa(t_list **head_a);
int		sb(t_list **head_b);
void	ss(t_list **head_a, t_list **head_b);
int		ra(t_list **head);
int		rb(t_list **head);
void	rr(t_list **head_a, t_list **head_b);
void	rra(t_list **head);
void	rrb(t_list **head);
void	rrr(t_list **head_a, t_list **head_b);
int		pa(t_list **head_a, t_list **head_b);
int		pb(t_list **head_a, t_list **head_b);

#endif