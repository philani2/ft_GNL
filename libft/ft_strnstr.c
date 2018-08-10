/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:24:27 by bgumede           #+#    #+#             */
/*   Updated: 2018/05/27 12:02:13 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		length;
	char	*dst;
	char	*src;

	if (*needle == '\0')
		return ((char*)haystack);
	dst = (char *)haystack;
	src = (char *)needle;
	i = 0;
	length = ft_strlen((char*)src);
	while (dst[i] != '\0' && (i + length) <= len)
	{
		if (ft_strncmp((dst + i), src, length) == 0)
		{
			return (dst + i);
		}
		i++;
	}
	return (NULL);
}
