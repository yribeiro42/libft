/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 09:50:22 by yribeiro          #+#    #+#             */
/*   Updated: 2016/11/23 21:11:50 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	if (!*needle || !*haystack)
		return ((char *)haystack);
	while (*haystack && j < n)
	{
		if (*haystack == needle[i])
			i++;
		else
			i = 0;
		if (needle[i] == '\0')
			return ((char *)(haystack - i + 1));
		haystack++;
		n--;
		j++;
	}
	return (0);
}
