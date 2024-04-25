#include <stdio.h>
#include <unistd.h>

void    ft_swap(int *a, int *b)
{
    int aux;
    
    aux = *a;
    *a = *b;
    *b = aux;


}

int main(void)
{
    int a;
    int b;
    int *ptra;
    int *ptrb;

    a = 42;
    b = 33;
    ptra = &a;
    ptrb = &b;
    ft_swap(ptra, ptrb);
    printf("%d%d", *ptra, *ptrb);
    return(0);
}
