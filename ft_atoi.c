/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:29:05 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/10 13:40:41 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	result;
	int	negative;

	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
			|| *str == '\r' || *str == '\v')
		str++;
	if (*str == '-')
		negative = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str <= '9' && *str >= '0')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (negative == 1)
		return (-result);
	else
		return (result);
}
