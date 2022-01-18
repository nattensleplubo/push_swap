/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:10:07 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/18 09:55:31 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define bite print_bite();

void	print_bite(void)
{
	printf("BITE!!!!!\n");
}

int	is_c(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_if_num(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] != '\0')
			j++;
		while (argv[i][j])
		{
			if (is_c(argv[i][j], "1234567890") == 0)
				return (-1);
			j++;
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
			//printf("%d %d %s\n", j, argc, argv[j]);
			if (argv[j] != NULL && temp == ft_atoi(argv[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

// int	check_args(int argc, char **argv)
// {
// 	//argc++;
// 	if (check_minmax(argc, argv) == -1)
// 		return (-1);
// 	if (check_if_num(argc, argv) == -1 && check_double(argc, argv) == -1)
// 		return (-1);
// 	return (1);
// }

int	main(int argc, char **argv)
{
	int	i = check_double(argc, argv);
	//int	j = check_double(argc, argv);
	//printf("Check if num : %d\nCheck if doubles : %d\n", i, j);
	printf("%d\n", i);
}