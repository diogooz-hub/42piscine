/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);
*/

#include <stdio.h>

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

char	*ft_strrev(char *str)
{
	int	i;
	int	aux;
	int	size;

	i = 0;
	size = checklen(str);
	while (i < (size / 2))
	{
		aux = str[i];
		str[i] = str[size - i - 1];
		str[size - 1 - i] = aux;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "12345678";

	printf("%s", ft_strrev(str));
}