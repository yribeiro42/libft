/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 20:18:34 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/12 14:21:20 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhitespace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	end = ft_strlen(s) - 1;
	while (s[start] && ft_iswhitespace(s[start]))
		start++;
	while (s[end] && end > start && ft_iswhitespace(s[end]))
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
