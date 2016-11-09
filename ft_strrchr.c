/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:38:43 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/09 18:58:48 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (*(s + len) != (char)c && *s != '\0')
		len--;
	if (*(s + len) == (char)c)
		return (*(s + len);
	else
		return (NULL);
}
