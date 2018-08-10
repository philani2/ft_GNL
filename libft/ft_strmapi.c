/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:13:17 by bgumede           #+#    #+#             */
/*   Updated: 2018/05/30 14:04:05 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	int		i;
	int		j;

	if (!s || !f)
		return (NULL);
	j = ft_strlen((char*)s);
	mapi = ft_strnew(j);
	if (!mapi)
		return (NULL);
	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			mapi[i] = (*f)(i, s[i]);
			i++;
		}
		mapi[i] = '\0';
	}
	return (mapi);
}
