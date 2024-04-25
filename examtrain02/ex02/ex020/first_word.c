/*
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/


#include <stdio.h>
#include <unistd.h>

void	checkword(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			while (str[i + 1] != 32 && str[i + 1] != '\0')
			{
				write (1, &str[i], 1);
				i++;
			}
			write (1, &str[i], 1);
			return ;
		}
		i++;
	}
}



int main(int ac, char **av)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
	}
	else
	{
		checkword(av[1]);
		write (1, "\n", 1);
	}
	return (0);
}
