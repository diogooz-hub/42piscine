#include <unistd.h>
#include <stdio.h>

//strcmp
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if(s1[i] > s2[i])
		return (1);

		if(s2[i] > s1[i])
		return (-1);
		i++;
	}
	return(0);
}

//sortArray
void	ft_sort (char **array, int size)
{
	int	i;
	char *aux;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(array[i], array[i + 1]) == 1)
				{
					aux = array[i];
					array[i] = array[i + 1];
					array[i + 1] = aux;
				}
			i++;
		}
		size--;
	}
}

//putchar
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// print
int	main(int ac, char *av[])
{
	ft_sort(av, ac);
	
	int	i;
	int	n;

	n = 1;
	while (n < ac)
	{
		i = 0;
		while (av[n][i] != '\0')
		{
			ft_putchar(av[n][i]);
			i++;
		}
		ft_putchar('\n');
		n++;
	}
}