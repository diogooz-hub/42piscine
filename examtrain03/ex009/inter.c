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

#include <unistd.h>
#include <stdio.h>

int	checkdoubles(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	n;

	i = 0;
	while (s1[i] != '\0')
	{
		n = 0;
		while (s2[n] != '\0')
		{
			if (s1[i] == s2[n])
			{
				if (checkdoubles(s1, s1[i], i) == 0)
				{
					write (1, &s1[i], 1);
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
