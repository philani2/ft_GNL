/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:54:07 by bgumede           #+#    #+#             */
/*   Updated: 2018/05/26 15:06:49 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*d;
	const unsigned char	*s;

	i = 0;
	d = (const unsigned char*)dest;
	s = (const unsigned char*)src;
	while (i < n)
	{
		if (d[i] != s[i] || s[i] != d[i])
			return (d[i] - s[i]);
		d++;
		s++;
		n--;
	}
	return (0);
}
