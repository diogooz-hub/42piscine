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

char *ft_rev_print (char *str)
{
    int i;
    int aux;
    int len;
    
    len = ft_strlen(str);
    i = 0;
    while (i < (len / 2))
    {
        aux = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = aux;
        i++;
    }
    return(str);
}