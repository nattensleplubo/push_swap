/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:48:49 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/25 13:00:00 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	while ((*lst))
	{
		temp = *lst;
		(*lst) = (*lst)->next;
		temp->content = 0;
		free(temp);
	}
	return (0);
}