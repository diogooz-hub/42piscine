#include <stdio.h>

int	ft_fibonacci(int index)
{
	int n;

	if (index < 0)
	return (-1);

	else if (index == 0)
	return (0);

	else if (index == 1)
	return (1);

	else
	{
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (n);
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(8));
}

//DONE