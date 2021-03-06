/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:13:30 by ngobert           #+#    #+#             */
/*   Updated: 2022/01/28 10:15:55 by ngobert          ###   ########.fr       */
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

// t_list	*ft_lstnew(int content, int index)
// {
// 	t_list	*ret;

// 	ret = (t_list *)malloc(sizeof(t_list));
// 	if (ret)
// 	{
// 		ret->content = content;
// 		ret->index = index;
// 		ret->next = NULL;
// 	}
// 	return (ret);
// }