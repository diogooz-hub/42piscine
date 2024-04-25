/*Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux
*/

#include <unistd.h>

void writestr (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	checklen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main (int ac, char **av)
{
	int i;
	int n;
	int len;

	i = 0;
	len = 0;
	n = 0;
	while (av[1][i] != '\0')
	{
		while (av[2][n])
		{
			if (av[1][i] == av[2][n])
			{
				len++;
				break ;
			}
		n++;
		}
	i++;
	}
	if (len == checklen(av[1]))
	{
		writestr(av[1]);
	}
	return (0);
}