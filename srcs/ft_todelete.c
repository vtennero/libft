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
#include <stdio.h>

void	ft_lstpushfront(t_list **begin, void *content)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->content = content;
		tmp->next = *begin;
		*begin = tmp;
	}
}

t_list	*ft_chnglst(t_list *list, void *str)
{
	list->content = str;
	return (list);
}

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list)
	{
		list->content = (content == 0 ? NULL : (void *)content);
		list->content_size = (content == 0 ? content_size : 0);
		list->next = NULL;
	}
	return (list);
}

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_lstpushfront(&list, "toto");
	ft_lstpushfront(&list, "tata");
	ft_lstpushfront(&list, "tutu");
	ft_lstiter(list, *ft_chnglst(list, "chang"));
	while (list)
	{
		//ft_chnglst(list, "changed !");
		printf("%s\n", (char*)list->content);
		list = list->next;
	}

	//printf("%s\n", ft_chglst(list->data)
	//printf("%s\n", (char*)ft_lstnew("toto", 56)->content);
	return(0);
}