/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:54:12 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/26 14:09:44 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_a_sorted(t_list **head_a)
{
	t_list	*one;
	t_list	*two;

	one = *head_a;
	two = *head_a;
	two = two->next;
	while (two)
	{
		if (one->content > two->content)
			return (1);
		one = one->next;
		two = two->next;
	}
	return (0);
}

int	ft_get_lowest(t_list *head)
{
	int	i[2];
	int	low;

	low = head->content;
	*(long *)i = 0;
	while (head)
	{
		if (head)
		{
			if (low > head->content)
			{
				low = head->content;
				i[1] = i[0];
			}
		}
		head = head->next;
		i[0]++;
	}
	return(i[1]);
}

int	ft_get_highest(t_list **head)
{
	int	i[2];
	int	high;

	high = (*head)->content;
	*i = 0;
	while (*head)
	{
		if (*head)
		{
			if (high < (*head)->content)
			{
				high = (*head)->content;
				i[1] = i[0];
			}
		}
		*head = (*head)->next;
		i[0]++;
	}
	return(i[1]);
}