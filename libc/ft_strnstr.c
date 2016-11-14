/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 21:12:25 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/14 21:19:38 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int i;
	int j;

	i = 0;
	if (n < ft_strlen(needle))
		return (NULL);
	if (!*needle || n == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && n)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
		n--;
	}
	return (0);
}

int main()
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = strlen(s2);
	printf("%s\n", strnstr(s1, s2, max)); 
	printf("%s\n", ft_strnstr(s1, s2, max)); 
	return (0);
}
	