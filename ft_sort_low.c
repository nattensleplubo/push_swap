/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:24:18 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/25 13:19:08 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two(t_list **head)
{
	if ((*head)->content > (*head)->next->content)
	{
		sa(head);
		write(1, "sa\n", 3);
	}
	else if ((*head)->content < (*head)->next->content)
		sb(head);
}