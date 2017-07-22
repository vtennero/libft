/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimempty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtennero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:11:15 by vtennero          #+#    #+#             */
/*   Updated: 2017/07/08 16:08:13 by vtennero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrimempty(void)
{
	char	*str;

	str = malloc(1);
	if (str)
	{
		str[0] = '\0';
		return (str);
	}
	return (NULL);
}
