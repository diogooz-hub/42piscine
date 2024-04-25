/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	checklen(int nbr)
{
	int			len;
	long int	n;

	n = nbr;
	len = 0;
	if (n < 0)
	{
		n = (-1 * n);
		len++;
	}
	while (n > 0)
	{
		n = (n / 10);
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char		*str;
	int			nbrlen;
	long int	n;

	n = nbr;
	nbrlen = checklen(nbr);
	str = (char *) malloc(sizeof(char) * nbrlen + 1);
	str[nbrlen--] = '\0'; // ou (srt[nbrlen] = '\0' e nbrlen = nbrlen - 1)
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		n = (n * -1);
	}
	while (n > 0)
	{
		str[nbrlen] = (n % 10) + 48;
		n = (n / 10);
		nbrlen--;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483647));
	printf("%d", checklen(-2147483647));
}
