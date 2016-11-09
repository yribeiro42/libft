/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:17:44 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/09 18:54:17 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

size_t	strlen(const char *s);
size_t	*ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
