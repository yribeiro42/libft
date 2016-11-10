/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 18:30:44 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/10 18:58:44 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *ret;
	int i;

	if (!s)
		return (NULL);
	ret = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (!ret)
		return (NULL);
	while (s[i] != '\0')
	{			
		ret[i] = (*f)(s[i]);
		i++:
	}
	ret[i] = '\0';
	return (ret);
}
