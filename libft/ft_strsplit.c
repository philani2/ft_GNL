/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 09:06:33 by bgumede           #+#    #+#             */
/*   Updated: 2018/06/11 09:28:56 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int		i;
	int		timer;

	i = 0;
	timer = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
			timer++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (timer);
}

static int	wordlen(const char *str, char c)
{
	int		i;
	int		timer2;

	i = 0;
	timer2 = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		timer2++;
		i++;
	}
	return (timer2);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**strmagic;
	int		i;
	int		i2;
	int		i3;

	if (!s || !(strmagic = (char**)malloc(sizeof(*strmagic) *
					(word_count(s, c) + 1))))
		return (0);
	i = -1;
	i2 = 0;
	while (++i < word_count(s, c))
	{
		i3 = 0;
		if (!(strmagic[i] = ft_strnew(wordlen(&s[i2], c) + 1)))
			strmagic[i] = NULL;
		while (s[i2] == c)
			i2++;
		while (s[i2] != c && s[i2])
			strmagic[i][i3++] = s[i2++];
		strmagic[i][i3] = '\0';
	}
	strmagic[i] = 0;
	return (strmagic);
}
