/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:56:49 by bgumede           #+#    #+#             */
/*   Updated: 2018/06/18 15:43:26 by bgumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		sign;
	size_t	j;

	res = 0;
	sign = 1;
	j = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str == '0')
		str++;
	while (*str && ft_isdigit(*str))
	{
		res = res * 10 + *str++ - '0';
		j++;
	}
	if (j > 10 && sign < 0)
		return (0);
	if (j > 10 && sign > 0)
		return (-1);
	return (res * sign);
}
