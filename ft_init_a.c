/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:28:06 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/28 15:59:23 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_a(int argc, char **argv, t_list **head_a)
{
	int		i;
	int		val;
	t_list	*temp;

	i = 1;
	while (i < argc)
	{
		val = ft_atoi(argv[i]);
		temp = ft_lstnew(val);
		ft_lstadd_back(head_a, temp);
		i++;
	}
}
