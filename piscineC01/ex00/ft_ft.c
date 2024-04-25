#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main (void)
{
	int	nbr;
	int *n;

	n = &nbr;
	nbr = 24;

	ft_ft(n);
	printf("%d\n", nbr);
	return(0);
}


//DONE