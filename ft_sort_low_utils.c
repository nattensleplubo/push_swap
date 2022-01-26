/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_low_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 11:13:03 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/26 11:31:41 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lowest_to_b(t_list **head_a, t_list **head_b)
{
	int	size;

	size = ft_lstsize(*head_a);
	while (ft_get_lowest(head_a))
	{
		if (ft_get_lowest(head_a) <= size / 2)
			ra(head_a);
		else
			rra(head_a);
	}
	pb(*head_a,*head_b);
}