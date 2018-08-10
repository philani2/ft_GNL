/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:22:06 by bgumede           #+#    #+#             */
/*   Updated: 2018/06/15 12:39:09 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
	int c, size_t n)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if ((unsigned char)src2[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
