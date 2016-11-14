/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yribeiro <yribeiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2016/11/11 17:35:02 by anonymous         #+#    #+#             */
/*   Updated: 2016/11/14 21:46:41 by anonymous        ###   ########.fr       */
=======
/*   Created: 2016/11/14 14:05:31 by yribeiro          #+#    #+#             */
/*   Updated: 2016/11/14 14:10:09 by yribeiro         ###   ########.fr       */
>>>>>>> f42c1ccb7e44063685a20225f4a7e706f5be3b48
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (0);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar_fd((nb + '0'), fd);
}
