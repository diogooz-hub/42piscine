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

#include <stdio.h>
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

void	printword(char *str, int start)
{
	while (str[start] != '\0')
	{
		write (1, &str[start], 1);
		start++;
	}
}

void last_word(char *str)
{
	int i;
	int len;
	int count;

	len = checklen(str) - 1;
	i = 0;
	while (str[len] == 32 || str[len] == 9)
	{
		len--;
	}
	while (str[len] != 32 && str[len] != 9)
	{
		len--;
	}
	printword(str, len + 1);
}


int	main (int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
		write (1, "\n", 1);
	}
	else
	{
		write (1, "\n", 1);
	}
	return (0);
}