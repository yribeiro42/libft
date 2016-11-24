/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yribeiro <yribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 09:50:22 by yribeiro          #+#    #+#             */
/*   Updated: 2016/11/24 15:43:08 by yribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	int i;

	i = 0;
	if (ft_strlen(big) < ft_strlen(little))
		return (NULL);
	if (!*little || !*big || big == little)
		return ((char *)big);
	while (*big && n)
	{
		if (*big == little[i])
			i++;
		else
			i = 0;
		if (little[i] == '\0')
			return ((char *)(big - i + 1));
		big++;
		n--;
	}
	return (0);
}
