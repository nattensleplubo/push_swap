/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:48:57 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/24 09:48:59 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_list **head)
{
	t_list	*tmp;
	t_list	*change;
	t_list	*new;

	if (ft_lstsize(*head) == 1)
		return (0);
	tmp = ft_lstlast(*head);
	new = (*head)->next;
	change = *head;
	tmp->next = change;
	change->next = NULL;
	*head = new;
	return (1);
}

int	rb(t_list **head)
{
	t_list	*tmp;
	t_list	*change;
	t_list	*new;

	if (ft_lstsize(*head) == 1)
		return (0);
	tmp = ft_lstlast(*head);
	new = (*head)->next;
	change = *head;
	tmp->next = change;
	change->next = NULL;
	*head = new;
	return (1);
}

void	rr(t_list **head_a, t_list **head_b)
{
	ra(head_a);
	rb(head_b);
}
