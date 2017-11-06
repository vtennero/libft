/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:53:27 by vtennero          #+#    #+#             */
/*   Updated: 2017/11/06 15:19:49 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list != NULL)
	{
		list->content = (content == 0 ? NULL : content);
		list->content_size = (content == 0 ? content_size : 0);
		list->next = NULL;
	}
	return (list);
}
