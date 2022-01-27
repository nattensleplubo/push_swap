/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:27:58 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/27 13:14:08 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_lowest(t_list *head)
{
	int	low;

	low = head->content;
	while (head)
	{
		if (low > head->next->content)
			low = head->next->content;
		head = head->next;
	}
	return (low);
}

int	check_index(t_list *head)
{
	while (head)
	{
		if (head->index == -1)
			return (0);
		head = head->next;
	}
	return (1);
}

void	set_index_null(t_list *head)
{
	while (head)
	{
		head->index = -1;
		head = head->next;
	}
}

void	set_index(t_list *head)
{
	int	index;
	int	lowest;
	int	temp;
	
	lowest = get_lowest(head);
}

void	ft_radix(t_list **head_a, t_list **head_b)
{
	
}

void	tri_de_merde(t_list **head_a, t_list **head_b)
{
	int	size = ft_lstsize(*head_a);
	int i = 0;

	while (i < size)
		i += (lowest_to_b(head_a, head_b), 1);
	i = 0;
	while (i < size)
		i += (pa(head_a, head_b), 1);
}
