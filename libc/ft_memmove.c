/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yribeiro <yribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 09:50:22 by yribeiro          #+#    #+#             */
/*   Updated: 2016/11/15 13:37:29 by yribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*desttmp;
	char	*srctmp;
	size_t			i;

	if (!dest || !src)
		return (NULL);
	desttmp = (char *)dest;
	srctmp = (char *)src;
	i = 0;
	if (srctmp < desttmp)
		while (--n)
			desttmp[n] = srctmp[n];
	else
		while (i++ < n)
			*(desttmp + i) = *(srctmp + i);
	return (dest);
}
