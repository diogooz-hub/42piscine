#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n < nb/2)
	{
		if((n * n) == nb)
		{
			return (n);
		}
		n++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(16));
}

//DONE