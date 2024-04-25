/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that writes a sequence of numbers from 1 to 100 to the output
standard, all separated by a newline.

If the number is a multiple of 3, the program should write 'fizz' instead.

If the number is a multiple of 5, the program should write 'buzz' instead.

If the number is a multiple of 3 and a multiple of 5, the program should write
'fizzbuzz' instead.

Exemple:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>
*/

#include <unistd.h>

void	ft_putnc(int n)
{
	if (n > 9)
	{
		ft_putnc (n / 10);
		ft_putnc (n % 10);
	}
	else
	{
	n = n + 48;
		write (1, &n, 1);
		//write (1, "\n", 1);
	}
}

int	fizzbuzz(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (((nb % 5) == 0) && ((nb % 3) == 0))
		{
			write (1, "fizzbuzz", 8);
		}
		else if ((nb % 5) == 0)
		{
			write (1, "buzz", 4);
		}
		else if ((nb % 3) == 0)
		{
			write (1, "fizz", 4);
		}
		else
		{
			ft_putnc(nb);
		}
		write (1, "\n", 1);
		nb++;
	}
	return (0);
}


int	main(void)
{
	fizzbuzz();
	return (0);
}
