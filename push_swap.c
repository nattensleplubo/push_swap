/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:56:40 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/21 14:01:03 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (argc < 2)
		return (0);
	else if (check_args(argc, argv) == 1)
	{
		ft_init_a(argc, argv, &head_a);
		if (!ft_is_a_sorted(&head_a))
		{
			write(1, "A is sorted\n", 12);
			return (0);
		}
	}
	return (0);
}