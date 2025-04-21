#include "ft.h"

int main(int ac, char **av)
{
    if (ac == 3)
    {
        ft_split(av[1], av[2]);
    }
    return 0;
}