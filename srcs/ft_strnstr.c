/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:18:13 by vtennero          #+#    #+#             */
/*   Updated: 2017/11/10 16:34:19 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strndup2(const char *s1, int n)
{
	char	*t;
	int		i;

	i = 0;
	t = (char *)malloc(sizeof(*t) * n + 1);
	if (!t)
		return (NULL);
	while (i < n)
	{
		t[i] = s1[i];
		i++;
	}
	t[n] = '\0';
	return (t);
}

int			ft_strmstr(const char *big, const char *little, int i, int k)
{
	char	*start;
	char	*to_find;
	int		begin;

	begin = 0;
	if (!*big && !*little)
		return (-1);
	while (*big)
	{
		start = (char*)big;
		to_find = (char*)little;
		i = k;
		begin = 0;
		while (*big && *to_find && (*big == *to_find))
		{
			begin = (begin == 0) ? i : begin;
			big++;
			to_find++;
			i++;
		}
		k++;
		if (!(*to_find))
			return (begin);
		big = start + 1;
	}
	return (-1);
}

char		*ft_strnstr(const char *big, const char *litl, size_t len)
{
	char 	*str;
	int		i;
	int		l;
	int		k;

	i = 0;
	l = 0;
	k = 0;
	if (big == litl && ft_strlen(big) == len)
		return ((char *)big);
	str = ft_strstr(ft_strndup2(big, len), litl);
	i = ft_strmstr(ft_strndup2(big, len), litl, l, k);
	if (i == -1)
		return (NULL);
	while (i > 0)
	{
		big++;
		i--;
	}
	return ((char *)big);
}
/*
   int		main(void)
   {
//char buf[] = "ozarabozaraboze123";
//char buf2[] = "un deux 9";
char buf3[] = "see FF your FF now return FF";

//printf("%s\n", ft_strnstr(buf, "ozaraboze", 15));
printf("%s\n", ft_strnstr(buf3, buf3, ft_strlen(buf3)));
//printf("%s\n", ft_strnstr(buf2, "deux", 10));
return (0);
}
*/
