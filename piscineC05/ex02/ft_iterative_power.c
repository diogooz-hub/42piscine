#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	
	res = 1;
	if (power < 0)
	return (0);

	if (power == 0)
	return (1);

	else
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 7));
}

//DONE