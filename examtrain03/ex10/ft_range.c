/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	i;

	if (start >= end)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * (end - start));
	if (!array)
	{
		return (NULL);
	}
	i = 0;
	while (start < end)
	{
		array[i] = start;
		start++;
		i++;
	}
	return (array);
}

int	main(void)
{
	int	i;
	int	*array;
	int	max;
	int	min;

	max = 10;
	min = -10;
	i = 0;
	array = ft_range(min, max);
	while (min < max)
	{
		printf("%d\n", array[i]);
		i++;
		min++;
	}
}
