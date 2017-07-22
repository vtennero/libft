/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaneg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 15:03:54 by vtennero          #+#    #+#             */
/*   Updated: 2017/07/08 12:47:45 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoaneg(int nv, int l)
{
	char	*res;
	int		j;
	long	p;

	p = -(long)nv;
	res = malloc(sizeof(char) * l + 1);
	if (!res)
		return (NULL);
	j = l - 1;
	res[0] = '-';
	while (p > 0)
	{
		res[j] = p % 10 + 48;
		p /= 10;
		j--;
	}
	res[l] = '\0';
	return (res);
}
