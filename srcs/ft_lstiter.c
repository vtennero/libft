/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:53:27 by vtennero          #+#    #+#             */
/*   Updated: 2017/11/06 15:19:49 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*ptr;

	while (lst)
	{
		ptr = lst->next;
		f(lst);
		lst = ptr;
	}
}