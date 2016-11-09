/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:38:43 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/09 18:50:42 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	while (*s != (char)c && *s != '\0')
		s++;
	if (*s == (char)c)
		return (*s);
	else
		return (NULL);
}
