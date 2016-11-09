/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:29:05 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/09 22:32:59 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
			|| *str == '\r' || *str == '\v')
		str++;
	if (*str == '-')
		sign = -1;
	// sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		result = value * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
