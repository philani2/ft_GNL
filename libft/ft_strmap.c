/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:15:33 by bgumede           #+#    #+#             */
/*   Updated: 2018/05/29 15:46:32 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*map;
	unsigned int	i;
	size_t			j;

	if (!s || !f)
		return (NULL);
	j = ft_strlen(s);
	map = (char*)malloc(sizeof(*map) * (j + 1));
	if (!map)
		return (NULL);
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			map[i] = f(s[i]);
			i++;
		}
		map[i] = '\0';
	}
	return (map);
}
