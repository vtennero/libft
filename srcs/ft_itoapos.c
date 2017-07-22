/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoapos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 15:03:54 by vtennero          #+#    #+#             */
/*   Updated: 2017/06/25 16:37:23 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoapos(int nv, int l)
{
	char	*res;
	int		j;

	res = malloc(sizeof(char) * l + 1);
	if (!res)
		return (NULL);
	j = l - 1;
	while (nv > 0)
	{
		res[j] = nv % 10 + 48;
		nv /= 10;
		j--;
	}
	res[l] = '\0';
	return (res);
}
