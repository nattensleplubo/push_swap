/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:49:08 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/25 14:39:01 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **head_a)
{
	t_list	*temp;
	t_list	*forward;

	if (!*head_a || ft_lstsize(*head_a) == 1)
		return ;
	temp = *head_a;
	forward = temp;
	forward = forward->next;
	temp->next = forward->next;
	forward->next = temp;
	*head_a = forward;
	write(1, "sa\n", 3);
}

void	sb(t_list **head_b)
{
	t_list	*temp;
	t_list	*forward;

	if (ft_lstsize(*head_b) == 1)
		return ;
	temp = *head_b;
	forward = temp;
	forward = forward->next;
	temp->next = forward->next;
	forward->next = temp;
	*head_b = forward;
	write(1, "sb\n", 3);
}

void	ss(t_list **head_a, t_list **head_b)
{
	sa(head_a);
	sb(head_b);
}