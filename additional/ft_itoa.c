/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:38:23 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/11 17:25:30 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nb_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_len;
	int		nb;
	
	str_len = nb_len(n);
	nb = n; 
	if (n < 0)
	{
		nb = -n;
		str_len++;
	}
	str = ft_strnew(str_len);
	if (!str)
		return (NULL);
	str[--str_len] = nb % 10 + '0';
	while (nb /= 10)
		str[--str_len] = nb % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}

int	main()
{
	printf("%s\n", ft_itoa(-1234));
	return (0);
}