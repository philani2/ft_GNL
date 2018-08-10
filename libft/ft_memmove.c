/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:27:57 by bgumede           #+#    #+#             */
/*   Updated: 2018/06/14 08:32:00 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *s;
	unsigned char *d;

	s = (unsigned char*)src;
	d = dst;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		while (len--)
			d[len] = s[len];
	return (dst);
}
