/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaco <dpaco@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:37:48 by dpaco             #+#    #+#             */
/*   Updated: 2022/09/14 10:52:59 by dpaco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_tochar(int a, int b)
{
	ft_putchar ((a / 10 + '0'), (a % 10 + '0'));
	write(1, " ", 1);
	ft_putchar ((b / 10 + '0'), (b % 10 + '0'));
	if (a < 98)
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_tochar(a, b);
			b++;
		}
	a++;
	}
}
