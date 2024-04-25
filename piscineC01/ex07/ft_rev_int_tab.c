#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab (int *tab, int size)
{
	int aux;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size -1 -i];
		tab[size -1 -i] = aux;
		i++;
	}
}

int	main (void)
{
	int	array [10] = {34, 2, 5, 4, 5, 40, 7, 45, 9, 10};
	int	size;
	int	i;

	size = 10;
	i = 0;
	ft_rev_int_tab (array, size);
	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return(0);
}

//DONE