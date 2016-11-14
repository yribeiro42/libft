/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yribeiro <yribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2016/11/09 16:08:10 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/14 20:19:24 by anonymous        ###   ########.fr       */
=======
/*   Created: 2016/11/14 14:05:31 by yribeiro          #+#    #+#             */
/*   Updated: 2016/11/14 14:13:25 by yribeiro         ###   ########.fr       */
>>>>>>> f42c1ccb7e44063685a20225f4a7e706f5be3b48
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0; 
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);	
}
