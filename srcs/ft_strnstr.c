/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 19:44:34 by vtennero          #+#    #+#             */
/*   Updated: 2017/06/18 19:51:22 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*start;
	char	*to_find;

	if (!*big && !*little)
		return ((char*)big);
	while (*big)
	{
		start = (char*)big;
		to_find = (char*)little;
		while (*big && *to_find && (*big == *to_find) && (len != 0))
		{
			big++;
			to_find++;
			len--;
		}
		if (!(*to_find))
			return (start);
		big = start + 1;
	}
	return (NULL);
}
