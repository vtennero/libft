/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 19:44:34 by vtennero          #+#    #+#             */
/*   Updated: 2017/11/09 19:16:14 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "stdio.h"

char	*ft_strnstr(const char *big, const char *litl, size_t len)
{
	char	*start;
	char	*to_find;
	int		l;

	l = len;
	start = NULL;
	if (!*big && !*litl)
		return ((char*)big);
	while (*big && l > 0)
	{
		start = (char*)big;
		to_find = (char*)litl;
		while (*big && *to_find && (*big == *to_find))
		{
			big++;
			to_find++;
			l--;
		}
		if (l < 0)
			return (NULL);
		if (!(*to_find))
			return (start);
		l--;
		big = start + 1;
	}
	return (NULL);
}

int	main(void)
{
	char	buf[] = "ozarabozaraboze123";
	//char	buf2[] = "un deux 9";

	printf("%s\n", ft_strnstr(buf, "ozaraboze", 15));
	//printf("%s\n", (ft_strnstr(buf2, "deux", 5)));
	return (0);
}
