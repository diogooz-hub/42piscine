/*
Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

Example:

$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
*/
#include <unistd.h>
#include <stdio.h>

int	checka(char *str)
{
	int	i;
	int	count;
	
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == 97)
		{
			count++;
			return (count);
		}
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char str[] = "teste outro a aqui no meio";

	printf("%d", checka(str));
	return (0);
}
*/


int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		write (1, "a", 1);
		write (1, "\n", 1);
	}
	else
	{
		if (checka(av[1]) == 1)
		{
			write (1, "a", 1);
			write (1, "\n", 1);
		}
		else
		{
			write (1, "\n", 1);
		}
	}
}
