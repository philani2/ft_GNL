/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:51:16 by bgumede           #+#    #+#             */
/*   Updated: 2018/05/26 08:56:05 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	len = ft_strlen((char*)needle);
	if (len == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j == len - 1)
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
