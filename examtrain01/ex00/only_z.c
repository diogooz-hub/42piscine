#include <unistd.h>

void onlyz(void)
{
    write(1, "z", 1);
}


int    main(void)
{
    onlyz();
    return (0);
}
