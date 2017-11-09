/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:29:46 by vtennero          #+#    #+#             */
/*   Updated: 2017/11/09 17:31:07 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void 				ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*nxlst;

	lst = *alst;
	while (*alst)
	{
		nxlst = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = nxlst;
	}
	*alst = NULL;
}
