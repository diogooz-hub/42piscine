/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaco <dpaco@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:06:53 by dpaco             #+#    #+#             */
/*   Updated: 2022/09/13 13:01:05 by dpaco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			write(1, "-", 1);
			write(1, "2", 1);
			ft_putnbr(147483648);
			return ;
		}
		if (nb < 0)
		{
			write(1, "-", 1);
			ft_putnbr(-nb);
		}
		else if (nb > 9)
		{
			ft_putnbr (nb / 10);
			ft_putnbr (nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
