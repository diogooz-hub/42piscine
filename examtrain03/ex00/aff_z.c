/*
Assignment name  : aff_z
Expected files   : aff_z.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.

Example:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$
*/

#include <stdio.h>
#include <unistd.h>

int	check_z(char *str)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
		{
			check = 1;
			return (check);
		}
		i++;
	}
	return (0);
}

void	aff_z(char *str)
{
	int	i;

	if (check_z(str) == 0)
	{
		write (1, "z", 1);
		write (1, "\n", 1);
	}
	else
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
		{
			write (1, "z", 1);
			write (1, "\n", 1);
			break ;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		aff_z(av[1]);
	}
	else
	{
		write (1, "z\n", 2);
		//write (1, "\n", 1);
	}
	return (0);
}
