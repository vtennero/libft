/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 19:44:34 by vtennero          #+#    #+#             */
/*   Updated: 2017/11/06 14:39:45 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *litl, size_t len)
{
	char	*start;
	char	*to_find;

	if (!*big && !*litl)
		return ((char*)big);
	while (*big && len > 0)
	{
		start = (char*)big;
		to_find = (char*)litl;
		while (*big && *to_find && (*big == *to_find) && (len != 0))
		{
			big++;
			to_find++;
			len--;
		}
		if (!(*to_find))
			return (start);
		len--;
		big = start + 1;
	}
	return (NULL);
}
