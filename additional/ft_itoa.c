/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yribeiro <yribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2016/11/11 16:38:23 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/14 21:40:21 by anonymous        ###   ########.fr       */
=======
/*   Created: 2016/11/14 14:05:31 by yribeiro          #+#    #+#             */
/*   Updated: 2016/11/14 14:09:37 by yribeiro         ###   ########.fr       */
>>>>>>> f42c1ccb7e44063685a20225f4a7e706f5be3b48
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

char	*ft_itoa(int n) // ajouter return intmin
{
	char			*str;
	size_t			str_len;
	unsigned int	nb;
	
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
