/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 15:03:54 by vtennero          #+#    #+#             */
/*   Updated: 2017/07/08 12:50:03 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa(int n)
{
	int	nv;
	int	l;
	int	i;

	l = ft_itoalength(n);
	nv = 0;
	i = 0;
	i = l;
	if (n == 0)
		return (ft_itoazero());
	else if (n > 0)
		return (ft_itoapos(n, l));
	else if (n < 0)
		return (ft_itoaneg(n, l));
	return (NULL);
}
