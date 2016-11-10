/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:17:24 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/10 17:25:21 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	tempdest = *(unsigned char *)dest;
	tempsrc = *(unsigned char *)src;
	while (n--)
	{
		*tempdest++ = *tempsrc++;
		if (*tempsrc == (unsigned char)c)
			return (*tempdest + 1);
	}
	return (NULL);
}
