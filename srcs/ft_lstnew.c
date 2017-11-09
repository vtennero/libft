/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:30:13 by vtennero          #+#    #+#             */
/*   Updated: 2017/11/09 15:53:35 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list				*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (lst)
	{
		lst->next = NULL;
		if (content == 0)
			lst->content = NULL;
		content_size = 0;
	}
	return (lst);
}
