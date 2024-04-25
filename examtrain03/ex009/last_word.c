/*
Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/

#include <unistd.h>

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

void	ft_last_word(char *str)
{
	int	len;

	len = checklen(str) - 1;
	while (str[len] == 32 || str[len] == 9)
	{
		len--;
	}
	while (str[len] != 32 && str[len] != 9)
	{
		len--;
	}
	len++;
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}
}

int	main(int ac, char **av)
{
	ft_last_word(av[1]);
	return (0);
}
