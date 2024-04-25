#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (str[i] != '\0')
    {
        i++;
        len++;
    }
    return(len);
}

char *ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}




int main(void)
{
    char    str1[] = "ESREVER";

    printf("%s", ft_rev_print(str1));
    return (0);
}

// REVERSE
// ESREVER