/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 09:56:40 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/17 10:12:24 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	else if (check_args(argc, argv) == 1)
	{
		push_swap_init(argc, argv);
		push_swap(argc, argv);
		// free_push_swap();
	}
	return (0);
}