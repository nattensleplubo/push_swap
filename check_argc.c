/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:10:07 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/17 13:48:57 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_num(int argc, char **argv)
{
	int		i;
	int		j;
	int		x;
	char	set[] = "0123456789";

	i = 1;
	j = 0;
	x = 0;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] != '\0')
			j++;
		while (argv[i][j])
		{
			while (set[x])
			{
				if (argv[i][j] != set[x])
					return (-1);
				x += (j++, 1);
			}
		}
		j = (i++, 0);
	}
	return (1);
}

int	check_double(int argc, char **argv) // j -> va tout le temps se remettre a 1             i -> le chiffre sur lequel on est
{
	int	i;
	int	j;
	int	temp;
	
	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			temp = ft_atoi(argv[i]);
			if (i == j)
				j++;
			if (temp == ft_atoi(argv[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_args(int argc, char **argv)
{
	//argc++;
	if (check_if_num(argc, argv) == 1 && check_double(argc, argv) == 1)
		return (-1);
	return (1);
}

int	main(int argc, char **argv)
{
	int	i = check_if_num(argc, argv);
	int	j = check_double(argc, argv);
	printf("Check if num : %d\nCheck if doubles : %d\n", i, j);
}