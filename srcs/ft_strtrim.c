/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 16:13:08 by vtennero          #+#    #+#             */
/*   Updated: 2017/07/08 16:37:09 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	int			a;
	int			b;
	int			i;

	i = 0;
	if (s)
	{
		a = ft_strtrimc1(s);
		b = ft_strtrimc2(s, ft_strlen(s));
		if (!ft_strnew((size_t)((int)ft_strlen(s) - a - b)))
		{
			if (((int)ft_strlen(s) - a - b) <= 0 || ft_strlen(s) == 0)
				return (ft_strtrimempty());
			else
				return (NULL);
		}
		else if (((int)ft_strlen(s) - a - b) <= 0 || ft_strlen(s) == 0)
		{
			return (ft_strtrimempty());
		}
		else
			return (ft_strtrimcpy(ft_strnew((size_t)((int)ft_strlen(s) - \
								a - b)), s, (int)ft_strlen(s) - a - b, a));
	}
	return (0);
}
