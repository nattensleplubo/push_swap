/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:13:30 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/21 14:06:29 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
#include "./libft/ft_printf/ft_printf.h"
#include <limits.h>

void	ft_init_a(int argc, char **argv, t_list **head_a);
int	ft_is_a_sorted(t_list **head_a);

#endif