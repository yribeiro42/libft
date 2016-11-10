/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:18:38 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/10 15:54:32 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *tempdest;
	const unsigned char *tempsrc;

	tempdest = dest;
	tempsrc = src;
	while (n--)
	{
		*tempdest++ = *tempsrc++;
	}
	return (dest);
}
