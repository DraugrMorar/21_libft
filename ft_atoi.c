/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmorar <dmorar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:27:28 by dmorar            #+#    #+#             */
/*   Updated: 2018/12/13 14:51:21 by dmorar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long int	res;
	int					sign;

	sign = 1;
	i = 0;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] == str[i])
			return (res);
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > 9223372036854775)
			return ((sign == 1) ? -1 : 0);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(res * sign));
}
