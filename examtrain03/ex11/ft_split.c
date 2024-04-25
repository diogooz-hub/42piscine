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

char	**build_array(char *str, int count, int n)
{
	int		len;
	char	**array;
	//+checklen to malloc
	checklen (str, count);

	array[n] = (char *)malloc(sizeof(char) * len);
	while(//str original nao vai ate ao i que passei)
	{
		array[n][i] = str[i];
		i++;
	}
	return(array);

}

char	**ft_split(char *str) //parto a str
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i] <= 32)
	{
		i++;
		if (str[i + 1] <= 32)
		{
			build_array(str, i, n);
		}
		n++
		//array[1]

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
