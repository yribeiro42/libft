/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:59:07 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/09 19:31:09 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + 1])
		{
			if (needle[j] == '\0')
				return ()
			j++;
		}
		i++:
	}


}