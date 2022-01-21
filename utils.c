/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:54:12 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/21 13:59:23 by ngobert          ###   ########.fr       */
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