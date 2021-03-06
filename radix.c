/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:27:58 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/31 12:24:07 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_list *head, t_list *node)
{
	t_list	*tmp;
	int		ret;

	tmp = head;
	ret = 0;
	while (head && head->content != node->content)
		head = head->next;
	while (tmp)
	{
		if (head->content > tmp->content)
			ret++;
		tmp = tmp->next;
	}
	return (ret);
}

void	set_index(t_list **head)
{
	t_list	*temp;

	temp = *head;
	while (*head)
	{
		(*head)->index = get_index(temp, (*head));
		*head = (*head)->next;
	}
	*head = temp;
}

void	ft_radix(t_list **head_a, t_list **head_b)
{
	int	size;
	int	i;
	int	j;
	int	n;

	size = (set_index(head_a), ft_lstsize(*head_a));
	i = 0;
	while (ft_is_list_sort(*head_a))
	{
		j = -1;
		while (++j < size)
		{
			n = (*head_a)->index;
			if ((n >> i) & 1)
				ra(head_a);
			else
				pb(head_a, head_b);
		}
		n = size - ft_lstsize(*head_a);
		j = 0;
		while (j < n)
			j += (pa(head_a, head_b), 1);
		(*head_b) = (++i, NULL);
	}
	return ;
}
