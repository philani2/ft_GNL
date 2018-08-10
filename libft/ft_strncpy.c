/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:01:49 by bgumede           #+#    #+#             */
/*   Updated: 2018/06/01 11:51:32 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = len;
	while (i != len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		j--;
	}
	while (j != 0)
	{
		dst[i] = '\0';
		i++;
		j--;
	}
	return (dst);
}
