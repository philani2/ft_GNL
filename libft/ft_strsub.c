/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:28:21 by bgumede           #+#    #+#             */
/*   Updated: 2018/06/05 15:03:42 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*m;

	i = 0;
	if (!s)
		return (NULL);
	m = ft_strnew(len);
	if (!m)
		return (NULL);
	if (s)
	{
		while (i < len)
		{
			m[i] = s[start + i];
			i++;
		}
		m[i] = '\0';
	}
	return (m);
}
