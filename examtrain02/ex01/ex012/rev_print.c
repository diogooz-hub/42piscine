/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a string and displays the string in reverse
order followed by the newline.
Its prototype is constructed like this :
  char *ft_rev_print (char *str)
It must return its argument

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/

#include <unistd.h>
#include <stdio.h>

int	checklen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char *ft_rev_print (char *str)
{
	int	strlen;

	strlen = checklen(str);
	while (strlen >= 0)
	{
		write(1, &str[strlen], 1);
		strlen--;
	}
	return(str);
}

int	main(void)
{
	char str[] = "diogoooo is dweoinfe";
	ft_rev_print(str);
	return(0);
}