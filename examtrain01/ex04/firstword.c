#include <stdio.h>
#include <unistd.h>

char    *ft_first_word(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] == 32 || str[i])
        {
             i++;
        }
        if (str[i + 1] != 32)
        {
        }
    i++;
    }
return (str);
}





int main(void)
{
    char    str1[] = " diogo,iz cool";

    printf("%s", ft_first_word(str1));
    return (0);
}

//se o meu i+1 for = 32 então sai da função



int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
