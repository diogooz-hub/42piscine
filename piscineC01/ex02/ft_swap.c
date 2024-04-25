#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

int	main (void)
{
	int	na;
	int	nb;
	int	*a;
	int	*b;

	na = 1;
	nb = 5;
	a = &na;
	b = &nb;
	ft_swap (a, b);
	printf("%d\n%d", na, nb);
	return(0);
}

//DONE
