#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(str[i] != '\0')
    {
        i++;
        count++;
    }
    return(count);
}

/*
int main(void)
{
    char    str1[] = "DIOGO";

    printf("%d", ft_strlen(str1));
    return (0);
}
*/