#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	return (0);
	
	if (nb == 0)
	return (1);

	else
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(8));
}