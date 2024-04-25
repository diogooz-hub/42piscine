/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

#include <stdlib.h>
 
char	**ft_split(char *str) //parto a str
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	//get len from original str
	// count to see how many substrings

	while (i < len)
	{
		while (i < len)
		{
			if (str[i] <= 32)
		}
	}
}

int	main(void)
{
	int		str_n;
	char	*str;
	char	**strs;

	str = "Hi! my name is DIOGO";
	strs = ft_split(str);
	str_n = 0;
	while (strs[str_n] != 0)
	{
		printf("[%d]: %s\n", str_n, strs[str_n]);
		str_n++;
	}
	free(strs);
	return (0);
}
