/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaco <dpaco@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:52:57 by dpaco             #+#    #+#             */
/*   Updated: 2022/09/11 11:40:36 by dpaco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	writeline(char in, char mid, char fin, int size)
{
	int	count;

	count = 1;
	ft_putchar(in);
	while (count < size - 1)
	{
		ft_putchar(mid);
		count ++;
	}
	if (size > 1)
	{
		ft_putchar(fin);
	}
	ft_putchar('\n');
}

void	writecolumn(char c, int size)
{
	writeline(c, ' ', c, size);
}

void	rush(int x, int y)
{
	int	count;

	count = 1;
	if (x > 0 && y > 0)
	{	
		writeline('A', 'B', 'A', x);
		while (count < y - 1)
		{
			writecolumn('B', x);
			count ++;
		}
		if (y > 1)
		{
			writeline('C', 'B', 'C', x);
		}
	}
}
