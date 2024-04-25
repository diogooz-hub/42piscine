/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <stdio.h>
#include <unistd.h>

int	checkdoubles(char *str, char check, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == check)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_inter(char *str1, char *str2)
{
	int	i;
	int	n;

	i = 0;
	while (str1[i] != '\0')
	{
		n = 0;
		while (str2[n] != '\0')
		{
			if (str1[i] == str2[n])
			{
				if (checkdoubles(str1, str1[i], i) == 1)
				{
					write (1, &str1[i], 1);
				}
				break ;
			}
			n++;
		}
		i++;
	}
}


int	main(int ac, char **av)
{
	ft_inter(av[1], av[2]);
	return (0);
}
