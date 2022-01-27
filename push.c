/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:36:21 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/27 11:47:34 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **head_a, t_list **head_b)
{
	t_list	*temp;
	t_list	*swap;

	if (!*head_b)
		return ;
	if (ft_lstsize(*head_b) != 1)
	{
		temp = *head_b;
		temp = temp->next;
	}
	swap = (*head_b);
	(swap)->next = *head_a;
	*head_a = swap;
	(*head_b) = NULL;
	if (ft_lstsize(*head_b) <= 1)
		*head_b = temp;
	write(1, "pa\n", 3);
}

void	pb(t_list **head_a, t_list **head_b)
{
	t_list	*temp;
	t_list	*swap;

	if (!*head_a)
		return ;
	if (ft_lstsize(*head_a) != 1)
	{
		temp = *head_a;
		temp = temp->next;
	}
	swap = *head_a;
	(swap)->next = *head_b;
	*head_b = swap;
	(*head_a) = NULL;
	if (ft_lstsize(*head_a) <= 1)
		*head_a = temp;
	write(1, "pb\n", 3);
}