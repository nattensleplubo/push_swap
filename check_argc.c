/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:10:07 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/25 12:04:57 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_limits(int argc, char **argv)
{
	int		i;
	long	imin;
	long	imax;

	i = 1;
	imin = -2147483648;
	imax = 2147483647;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) > 12 && argv[i][0] == '-')
			return (-1);
		else if (ft_strlen(argv[i]) > 11)
			return (-1);
		if (ft_atol(argv[i]) > imax || ft_atol(argv[i]) < imin)
			return (-1);
		i++;
	}
	return (1);
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

int	check_double(int argc, char **argv)
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
			if (argv[j] != NULL && temp == ft_atoi(argv[j]))
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_args(int argc, char **argv)
{
	if (check_if_num(argc, argv) == -1 || check_double(argc, argv) == -1)
		return (printf("Arguments error\n"), -1);
	if (check_limits(argc, argv) == -1)
		return (printf("Arguments error\n"), -1);
	return (1);
}
