/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:30:41 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/31 12:24:54 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **head)
{
	int		i;
	int		size;
	t_list	*tail;
	t_list	*temp;

	i = 1;
	size = ft_lstsize(*head);
	tail = *head;
	temp = ft_lstlast(*head);
	tail = *head;
	while (i < size - 1)
	{
		tail = tail->next;
		i++;
	}
	tail->next = NULL;
	temp->next = *head;
	*head = temp;
	write(1, "rra\n", 4);
}

void	rrb(t_list **head)
{
	int		i;
	int		size;
	t_list	*tail;
	t_list	*temp;

	i = 0;
	size = ft_lstsize(*head);
	tail = *head;
	temp = ft_lstlast(*head);
	while (i < size - 1)
	{
		tail = tail->next;
		i++;
	}
	tail->next = NULL;
	temp->next = *head;
	*head = temp;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **head_a, t_list **head_b)
{
	rra(head_a);
	rrb(head_b);
}
