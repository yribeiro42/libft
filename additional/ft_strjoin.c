/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 19:55:06 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/10 20:13:39 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	if (!s1)
		return (NULL);
	ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!ret)
		return (NULL);
	ft_strcpy(copy, s1);
	ft_strcat(copy, s2);
	return (copy);
}