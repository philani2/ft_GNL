/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:23:33 by bgumede           #+#    #+#             */
/*   Updated: 2018/05/26 14:57:01 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	size_t	i;

	i = 0;
	src = (char *)s;
	while (i < n)
	{
		if ((unsigned char)src[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
