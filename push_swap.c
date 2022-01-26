/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:56:40 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/26 14:28:28 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_choose_sort(t_list **head_a, t_list **head_b)
{
	int	size;

	size = ft_lstsize(*head_a);
	if (size == 2)
		ft_sort_two(head_a);
	else if (size == 3)
		ft_sort_three(head_a);
	else if (size == 4)
		ft_sort_four(head_a, head_b);
	else if (size == 5)
		ft_sort_five(head_a, head_b);
}

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (argc < 3)
		return (0);
	else if (check_args(argc, argv) == 1)
	{
		ft_init_a(argc, argv, &head_a);
		if (!ft_is_a_sorted(&head_a))
		{
			write(1, "A is sorted\n", 12);
			return (0);
		}
		ft_choose_sort(&head_a, &head_b);
	}
	return (0);
}