/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:24:18 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/25 14:49:52 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define BUG printf("HERE\n");

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

// 	one	two	three
// 	3	2	1		DONE
// 	1	3	2		DONE
// 	2	3	1		DONE
// 	3	1	2		DONE
// 	2	1	3		DONE