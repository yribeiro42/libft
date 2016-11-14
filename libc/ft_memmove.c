/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yribeiro <yribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2016/11/10 15:56:11 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/14 20:11:18 by anonymous        ###   ########.fr       */
=======
/*   Created: 2016/11/14 14:05:31 by yribeiro          #+#    #+#             */
/*   Updated: 2016/11/14 14:12:40 by yribeiro         ###   ########.fr       */
>>>>>>> f42c1ccb7e44063685a20225f4a7e706f5be3b48
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;

	if (!s1 || !s2)
		return (NULL);
	temp = malloc(sizeof(*temp) * n);
	if (!temp)
		return (NULL);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	free(temp);
	return (dest);
}
