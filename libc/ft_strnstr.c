/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 09:50:22 by yribeiro          #+#    #+#             */
/*   Updated: 2016/11/24 19:00:51 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t s2_size;

	s2_size = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	while (n && *s1)
	{
		if (n < s2_size)
			return (NULL);
		if (*s1 == *s2)
		{
			if (strncmp(s1, s2, s2_size) == 0)
				return ((char *)s1);
		}
		s1++;
		n--;
	}
	return (NULL);
}
