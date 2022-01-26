/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:24:18 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/26 14:47:59 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define BUG printf("HERE\n");

void	ft_sort_two(t_list **head)
{
	if ((*head)->content > (*head)->next->content)
	{
		sa(head);
	}
	// else if ((*head)->content < (*head)->next->content)
	// 	sb(head);
}

void	ft_sort_three(t_list **head)
{
	int	one;
	int	two;
	int three;

	one = (*head)->content;
	two = (*head)->next->content;
	three = (*head)->next->next->content;
	if (one > two && two > three && three < one)
	{
		sa(head);
		rra(head);
	}
	else if (one < two && two > three && three > one)
	{
		rra(head);
		sa(head);
	}
	else if (one < two && two > three && three < one)
		rra(head);
	else if (one > two && two < three && three < one)
		ra(head);
	else if (one > two && two < three && three > one)
		sa(head);
}

void	ft_sort_five(t_list **head_a, t_list **head_b)
{
	lowest_to_b(head_a, head_b);
	lowest_to_b(head_a, head_b);
	ft_sort_three(head_a);
	pa(head_a, head_b);
	pa(head_a, head_b);
}

void ft_sort_four(t_list **head_a, t_list **head_b)
{
	lowest_to_b(head_a, head_b);
	ft_sort_three(head_a);
	pa(head_a, head_b);
}