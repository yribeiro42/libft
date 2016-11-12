/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:30:44 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/11 22:15:23 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *ret;
	unsigned int i;

	if (!s)
		return (NULL);
	ret = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (!ret)
		return (NULL);
	while (s[i] != '\0')
	{			
		ret[i] = (*f)(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
