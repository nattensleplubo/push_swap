/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:49:08 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/24 09:49:09 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_list **head_a)
{
	t_list	*temp;
	t_list	*forward;

	if (ft_lstsize(*head_a) == 1)
		return (0);
	temp = *head_a;
	forward = temp;
	forward = forward->next;
	temp->next = forward->next;
	forward->next = temp;
	*head_a = forward;
	return (1);
}

int	sb(t_list **head_b)
{
	t_list	*temp;
	t_list	*forward;

	if (ft_lstsize(*head_b) == 1)
		return (0);
	temp = *head_b;
	forward = temp;
	forward = forward->next;
	temp->next = forward->next;
	forward->next = temp;
	*head_b = forward;
	return (1);
}

void	ss(t_list **head_a, t_list **head_b)
{
	sa(head_a);
	sb(head_b);
}