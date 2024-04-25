/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/

#include <unistd.h>

int	check_doubles(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	checklen(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dsize;

	dsize = checklen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + dsize] = src [i];
		i ++;
	}
	dest[i + dsize] = '\0';
	return (dest);
}

void	*ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	s1 = ft_strcat(s1, s2);
	while (s1[i] != '\0')
	{
		if (check_doubles(s1, s1[i], i) == 1)
		{
			write(1, &s1[i], 1);
		}
		i++;
	}
	return (s1);
}

int	main(int ac, char **av)
{
	ft_union(av[1], av[2]);
	return (0);
}
