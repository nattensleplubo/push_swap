/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:13:30 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/21 13:37:08 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*dest;

	dest = malloc(sizeof(t_list));
	if (!dest)
		return (NULL);
	dest->next = NULL;
	dest->content = content;
	return (dest);
}
